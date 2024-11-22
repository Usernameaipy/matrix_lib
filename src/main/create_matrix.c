#include "matrix.h"

int create_matrix(int rows, int columns, matrix_t **result) {
  int stat = ok;
  if ((rows > INT_MAX || rows < INT_MIN) ||
      (columns > INT_MAX || columns < INT_MIN))
    stat = ncm_error;
  if (*result) stat = ncm_error;
  *result = (matrix_t *)malloc(sizeof(matrix_t));
  if (!(*result)) stat = mem_error;
  if (stat == ok) {
    double **mtr = (double **)malloc(sizeof(double *) * rows);
    if (mtr) {
      for (int i = 0; i < rows && stat != mem_error; i++) {
        mtr[i] = (double *)malloc(sizeof(double) * columns);
        if (!mtr[i]) stat = mem_error;
      }
      if (stat != ok) {
        for (int i = 0; i < rows; i++) {
          if (mtr[i]) free(mtr[i]);
        }
        free(mtr);
      }
      if (stat == ok) {
        (*result)->matrix = mtr;
        (*result)->rows = rows;
        (*result)->columns = columns;
      }
    } else
      stat = mem_error;
  }
  return stat;
}