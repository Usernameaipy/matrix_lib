#ifndef MATRIX_H
#define MATRIX_H
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct matrix_struct {
  double** matrix;
  int rows;
  int columns;
} matrix_t;
enum { ok = 0, ncm_error = 1, calc_error = 2, mem_error = 3 };
int create_matrix(int, int, matrix_t**);
#endif