#include "matrix.h"

int mult_matrix(matrix_t *mtr_one, matrix_t *mtr_two, matrix_t **result) {
  int stat = ok;
  if (!result || (*result)) stat = ncm_error;
  if (!mtr_one || !mtr_two) stat = ncm_error;
  if (stat == ok && (!mtr_one->matrix || !mtr_two->matrix)) stat = ncm_error;
  if (stat == ok && ((mtr_one->columns <= 0 || mtr_one->rows <= 0) ||
                     (mtr_two->columns <= 0 || mtr_two->rows <= 0)))
    stat = ncm_error;
  if (stat == ok && (mtr_one->columns != mtr_two->rows)) stat = ncm_error;
  if (stat == ok) {
    stat = create_matrix(mtr_one->rows, mtr_two->columns, result);
    if (stat == ok) {
      matrix_t *res = (*result);
      for (int i = 0; i < mtr_one->rows; i++)
        for (int j = 0; j < mtr_two->columns; j++)
          for (int k = 0; k < mtr_two->rows; k++)
            res->matrix[i][j] += mtr_one->matrix[i][k] * mtr_two->matrix[k][j];
    }
  }
  return stat;
}