#include "helper.h"

int output_matrix(FILE *stream, matrix_t *mtr) {
  int stat = 0;
  if (!mtr || !mtr->matrix) stat = ncm_error;
  if (stat == ok) {
    for (int i = 0; i < mtr->rows; i++) {
      for (int j = 0; j < mtr->columns; j++) {
        (j == 0) ? fprintf(stream, "%lf", mtr->matrix[i][j])
                 : fprintf(stream, " %lf", mtr->matrix[i][j]);
      }
      fprintf(stream, "\n");
    }
  }
  return stat;
}