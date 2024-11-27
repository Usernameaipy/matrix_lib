#include "helper.h"

int matrix_cp(matrix_t *mtr, matrix_t *result) {
  int stat = ok;
  if (!mtr || !result || !mtr->matrix || !result->matrix) stat = ncm_error;
  if (mtr->rows != result->rows || mtr->columns != result->columns)
    stat = ncm_error;
  if (stat == ok) {
    for (int i = 0; i < mtr->rows; i++) {
      for (int j = 0; j < mtr->columns; j++) {
        result->matrix[i][j] = mtr->matrix[i][j];
      }
    }
  }
  return stat;
}