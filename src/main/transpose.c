#include "matrix.h"

int transpose(matrix_t *mtr, matrix_t **result) {
  int stat = ok;
  if ((*result)) stat = ok;
  if (!mtr || !mtr->matrix) stat = ncm_error;
  if (mtr->rows <= 0 || mtr->columns <= 0) stat = ncm_error;
  if (stat == ok) {
    stat = create_matrix(mtr->columns, mtr->rows, result);
    if (stat == ok) {
      matrix_t *res = (*result);
      for (int i = 0; i < mtr->rows; i++)
        for (int j = 0; j < mtr->columns; j++)
          res->matrix[j][i] = mtr->matrix[i][j];
    }
  }
  return stat;
}