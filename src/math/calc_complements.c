#include "matrix.h"

int calc_complements(matrix_t *mtr, matrix_t **result) {
  int stat = ok;
  double check = 0;
  if (!result || (*result)) stat = ncm_error;
  if (!mtr || !mtr->matrix) stat = ncm_error;
  if (stat == ok && (mtr->columns != mtr->rows)) stat = ncm_error;
  if (stat == ok && (determinant(mtr, &check) == ok && check == 0))
    stat = ncm_error;
  if (stat == ok) {
    stat = create_matrix(mtr->rows, mtr->columns, result);
    if (stat == ok) {
      double det = 0;
      for (int i = 0; i < mtr->rows && stat == ok; i++) {
        for (int j = 0; j < mtr->columns && stat == ok; j++) {
          matrix_t *promt = NULL;
          stat = get_mtr_calc(i, j, mtr, &promt);
          stat = determinant(promt, &det);
          (*result)->matrix[i][j] = pow(-1, (i + j + 2)) * det;
          remove_matrix(&promt);
        }
      }
    }
    if (stat != ok) {
      remove_matrix(result);
    }
  }
  return stat;
}

int get_mtr_calc(int i_miss, int j_miss, matrix_t *mtr, matrix_t **result) {
  int stat = ok;
  stat = create_matrix(mtr->rows - 1, mtr->columns - 1, result);
  if (stat == ok) {
    int i_f_res = 0;
    int j_f_res = 0;
    for (int i = 0; i < mtr->rows; i++) {
      for (int j = 0; j < mtr->columns; j++) {
        if (i == i_miss || j == j_miss) continue;
        (*result)->matrix[i_f_res][j_f_res] = mtr->matrix[i][j];
        j_f_res++;
        if (j_f_res == (*result)->columns) {
          i_f_res++;
          j_f_res = 0;
        }
      }
    }
  }
  return stat;
}