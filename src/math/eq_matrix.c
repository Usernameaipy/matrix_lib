#include "matrix.h"

int eq_matrix(matrix_t *mtr_one, matrix_t *mtr_two, int epsilon) {
  int stat = success;
  double comp = pow(10, -1 * epsilon);
  if (!mtr_one || !mtr_two) stat = failure;
  if (stat == success &&
      (mtr_one->columns != mtr_two->columns || mtr_one->rows != mtr_two->rows))
    stat = failure;
  if (stat == success) {
    for (int i = 0; i < mtr_one->rows && stat == success; i++) {
      for (int j = 0; j < mtr_one->columns && stat == success; j++) {
        if (fabs(mtr_one->matrix[i][j] - mtr_two->matrix[i][j]) >= comp)
          stat = failure;
      }
    }
  }
  return stat;
}