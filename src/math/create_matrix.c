#include "matrix.h"

int create_matrix(int rows, int columns, matrix_t **result) {
  int stat = ok;
  if ((rows > INT_MAX || rows <= 0) || (columns > INT_MAX || columns <= 0))
    stat = ncm_error;
  if (*result) stat = ncm_error;
  if (stat == ok) *result = (matrix_t *)malloc(sizeof(matrix_t));
  if (!(*result) && stat == ok) {
    stat = mem_error;
    *result = NULL;
  }
  if (stat == ok) {
    double **mtr = (double **)malloc(sizeof(double *) * rows);
    if (mtr) {
      for (int i = 0; i < rows && stat != mem_error; i++) {
        mtr[i] = (double *)malloc(sizeof(double) * columns);
        if (!mtr[i]) stat = mem_error;
        for (int j = 0; j < columns && stat == ok; j++) {
          mtr[i][j] = 0;
        }
      }
      if (stat != ok) {
        for (int i = 0; i < rows; i++) {
          if (!mtr[i]) free(mtr[i]);
        }
        if (mtr) free(mtr);
        if (*result) free(*result);
        *result = NULL;
      }
      if (stat == ok) {
        (*result)->matrix = mtr;
        (*result)->rows = rows;
        (*result)->columns = columns;
      }
    } else {
      if (mtr) free(mtr);
      mtr = NULL;
      if (*result) free(*result);
      *result = NULL;
      stat = mem_error;
    }
  }
  return stat;
}