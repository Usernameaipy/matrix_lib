#ifndef STRU_ENUM
#define STRU_ENUM
typedef struct matrix_struct {
  double **matrix;
  int rows;
  int columns;
} matrix_t;
enum { ok = 0, ncm_error = 1, calc_error = 2, mem_error = 3, base = 4 };
enum { success = 1, failure = 0 };
#endif
#ifndef HELPER_H
#define HELPER_H
#include "stdio.h"
#include "stdlib.h"
int output_matrix(FILE *, matrix_t *);
int matrix_cp(matrix_t *, matrix_t *);
#endif