#include "matrix.h"

int inverse_matrix(matrix_t *mtr, matrix_t **result) {
  int stat = ok;
  double det = 0;
  if (!result || (*result)) stat = ncm_error;
  if (!mtr || !mtr->matrix || mtr->columns != mtr->rows) stat = ncm_error;
  if (stat == ok) {
    stat = determinant(mtr, &det);
    if (det == 0)
      stat = base;
    else {
      matrix_t *new_res = NULL;
      stat = calc_complements(mtr, result);
      stat = transpose((*result), &new_res);
      if (stat == ok) {
        remove_matrix(result);
        (*result) = new_res;
        new_res = NULL;
        stat = mult_number((*result), 1 / det, &new_res);
        if (stat == ok) {
          remove_matrix(result);
          (*result) = new_res;
          new_res = NULL;
        }
      }
    }
    if (stat != ok) {
      if ((*result)) remove_matrix(result);
    }
  }
  return stat;
}