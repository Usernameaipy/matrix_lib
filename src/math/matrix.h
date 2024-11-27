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
#ifndef MATRIX_H
#define MATRIX_H
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../enought_func/helper.h"
#define EPSILON 0.0000001
int create_matrix(int, int, matrix_t **);
int eq_matrix(matrix_t *, matrix_t *);
int sum_matrix(matrix_t *, matrix_t *, matrix_t **);
int sub_matrix(matrix_t *, matrix_t *, matrix_t **);
int mult_number(matrix_t *, double, matrix_t **);
int mult_matrix(matrix_t *, matrix_t *, matrix_t **);
int transpose(matrix_t *, matrix_t **);
int determinant(matrix_t *, double *);
double recurse_det(matrix_t *);
int calc_complements(matrix_t *, matrix_t **);
int get_mtr_calc(int, int, matrix_t *, matrix_t **);
int inverse_matrix(matrix_t *, matrix_t **);
void remove_matrix(matrix_t **);
#endif