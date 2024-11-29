#include "matrix.h"

int mult_number(matrix_t *mtr, double number, matrix_t **result) {
  int stat = ok;
  if ((*result)) stat = ncm_error;
  if (!mtr) stat = ncm_error;
  if (stat == ok && (!mtr->matrix || mtr->columns <= 0 || mtr->rows <= 0))
    stat = ncm_error;
  if (stat == ok) stat = create_matrix(mtr->rows, mtr->columns, result);
  if (stat == ok) {
    matrix_t *res = (*result);
    for (int i = 0; i < mtr->rows && stat == ok; i++)
      for (int j = 0; j < mtr->columns && stat == ok; j++)
        res->matrix[i][j] = mtr->matrix[i][j] * number;
  }
  return stat;
}