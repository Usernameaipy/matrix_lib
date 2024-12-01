#include "matrix.h"

int determinant(matrix_t *mtr, double *result) {
  int stat = ok;
  if (!mtr || !mtr->matrix) stat = ncm_error;
  if (stat == ok && (mtr->columns != mtr->rows)) stat = ncm_error;
  if (stat == ok) {
    *result = recurse_det(mtr);
  }
  return stat;
}

double recurse_det(matrix_t *mtr) {
  double det = 0, stat = ok;
  if (mtr->columns == 1) {
    stat = base;
    det = mtr->matrix[0][0];
  }
  if (mtr->columns == 2) {
    stat = base;
    det = mtr->matrix[0][0] * mtr->matrix[1][1] -
          mtr->matrix[0][1] * mtr->matrix[1][0];
  }
  if (stat == ok) {
    for (int i = 0; i < mtr->columns; i++) {
      matrix_t *new_mtr = NULL;
      stat = create_matrix(mtr->rows - 1, mtr->columns - 1, &new_mtr);
      for (int j = 1; j < mtr->rows && stat == ok; j++) {
        int k_minor = 0;
        for (int k = 0; k < mtr->columns; k++) {
          if (k == i) continue;
          new_mtr->matrix[j - 1][k_minor] = mtr->matrix[j][k];
          k_minor++;
        }
      }
      if (stat == ok) {
        det += (i % 2 == 0 ? 1 : -1) * mtr->matrix[0][i] * recurse_det(new_mtr);
        remove_matrix(&new_mtr);
      }
    }
  }
  return det;
}