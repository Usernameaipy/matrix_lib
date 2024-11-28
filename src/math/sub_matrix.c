#include "matrix.h"

int sub_matrix(matrix_t *mtr_one, matrix_t *mtr_two, matrix_t **result) {
  int stat = ok;
  if ((*result)) stat = ncm_error;
  if (!mtr_one || !mtr_two) stat = ncm_error;
  if (stat == ok &&
      ((!mtr_one->matrix || mtr_one->columns <= 0 || mtr_one->rows <= 0) ||
       (!mtr_two->matrix || mtr_two->columns <= 0 || mtr_two->rows <= 0)))
    stat = ncm_error;
  if (stat == ok &&
      (mtr_one->rows != mtr_two->rows || mtr_one->columns != mtr_two->columns))
    stat = ncm_error;
  if (stat == ok) {
    stat = create_matrix(mtr_one->rows, mtr_one->columns, result);
    if (stat == ok) {
      matrix_t *res = (*result);
      for (int i = 0; i < mtr_one->rows && stat == ok; i++)
        for (int j = 0; j < mtr_one->columns && stat == ok; j++)
          res->matrix[i][j] = mtr_one->matrix[i][j] - mtr_two->matrix[i][j];
    }
  }
  return stat;
}