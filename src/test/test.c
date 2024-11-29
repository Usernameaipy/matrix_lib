#include "test.h"

START_TEST(create_matrix_normal_one) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(6, 6, &mtr);
  ck_assert_int_eq(stat, ok);
  ck_assert_ptr_ne(mtr, NULL);
  ck_assert_ptr_ne(mtr->matrix, NULL);
  remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_normal_two) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(78, 4, &mtr);
  ck_assert_int_eq(stat, ok);
  ck_assert_ptr_ne(mtr, NULL);
  ck_assert_ptr_ne(mtr->matrix, NULL);
  remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_normal_three) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(23, 233, &mtr);
  ck_assert_int_eq(stat, ok);
  ck_assert_ptr_ne(mtr, NULL);
  ck_assert_ptr_ne(mtr->matrix, NULL);
  remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_normal_four) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(567, 192, &mtr);
  ck_assert_int_eq(stat, ok);
  ck_assert_ptr_ne(mtr, NULL);
  ck_assert_ptr_ne(mtr->matrix, NULL);
  remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_normal_five) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(987, 7832, &mtr);
  ck_assert_int_eq(stat, ok);
  ck_assert_ptr_ne(mtr, NULL);
  ck_assert_ptr_ne(mtr->matrix, NULL);
  remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_isnot_null_one) {
  matrix_t *mtr_one = NULL;
  int stat = create_matrix(67, 23, &mtr_one);
  ck_assert_int_eq(stat, ok);
  ck_assert_ptr_ne(mtr_one, NULL);
  matrix_t *mtr_two = mtr_one;
  stat = create_matrix(78, 32, &mtr_two);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_ne(mtr_two, NULL);
  ck_assert_ptr_ne(mtr_two->matrix, NULL);
  remove_matrix(&mtr_one);
}
END_TEST

START_TEST(create_matrix_isnot_null_two) {
  matrix_t *mtr_one = NULL;
  int stat = create_matrix(978, 324, &mtr_one);
  ck_assert_int_eq(stat, ok);
  ck_assert_ptr_ne(mtr_one, NULL);
  matrix_t *mtr_two = mtr_one;
  stat = create_matrix(978, 324, &mtr_two);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_ne(mtr_two, NULL);
  ck_assert_ptr_ne(mtr_two->matrix, NULL);
  remove_matrix(&mtr_one);
}
END_TEST

START_TEST(create_matrix_isnot_null_three) {
  matrix_t *mtr_one = NULL;
  int stat = create_matrix(1, 1, &mtr_one);
  ck_assert_int_eq(stat, ok);
  ck_assert_ptr_ne(mtr_one, NULL);
  matrix_t *mtr_two = mtr_one;
  stat = create_matrix(1, 1, &mtr_two);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_ne(mtr_two, NULL);
  ck_assert_ptr_ne(mtr_two->matrix, NULL);
  remove_matrix(&mtr_one);
}
END_TEST

START_TEST(create_matrix_isnull_size_one) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(0, 897, &mtr);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_isnull_size_two) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(0, 1, &mtr);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_isnull_size_three) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(562, 0, &mtr);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_isnull_size_four) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(1, 0, &mtr);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_isnull_size_five) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(0, 0, &mtr);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_isnegative_size_one) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(-9, 567, &mtr);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_isnegative_size_two) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(-43, 0, &mtr);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_isnegative_size_three) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(421, -53, &mtr);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_isnegative_size_four) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(0, -432, &mtr);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_isnegative_size_five) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(-892, -673, &mtr);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_islarge_size_one) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(INT_MAX, INT_MAX, &mtr);
  _ck_assert_int(stat, >=, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_islarge_size_two) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(INT_MAX, 7642, &mtr);
  _ck_assert_int(stat, >=, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_islarge_size_three) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(INT_MAX, 0, &mtr);
  _ck_assert_int(stat, >=, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_islarge_size_four) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(674, INT_MAX, &mtr);
  _ck_assert_int(stat, >=, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(create_matrix_islarge_size_five) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(0, INT_MAX, &mtr);
  _ck_assert_int(stat, >=, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(remove_matrix_normal_one) {
  matrix_t *mtr = NULL;
  create_matrix(45, 23, &mtr);
  ck_assert_ptr_ne(mtr, NULL);
  remove_matrix(&mtr);
  ck_assert_ptr_eq(mtr, NULL);
}
END_TEST

START_TEST(remove_matrix_normal_two) {
  matrix_t *mtr = NULL;
  create_matrix(8274, 872, &mtr);
  ck_assert_ptr_ne(mtr, NULL);
  remove_matrix(&mtr);
  ck_assert_ptr_eq(mtr, NULL);
}
END_TEST

START_TEST(remove_matrix_normal_three) {
  matrix_t *mtr = NULL;
  create_matrix(123, 5312, &mtr);
  ck_assert_ptr_ne(mtr, NULL);
  remove_matrix(&mtr);
  ck_assert_ptr_eq(mtr, NULL);
}
END_TEST

START_TEST(remove_matrix_normal_four) {
  matrix_t *mtr = NULL;
  create_matrix(532, 1244, &mtr);
  ck_assert_ptr_ne(mtr, NULL);
  remove_matrix(&mtr);
  ck_assert_ptr_eq(mtr, NULL);
}
END_TEST

START_TEST(remove_matrix_normal_five) {
  matrix_t *mtr = NULL;
  create_matrix(522, 5221, &mtr);
  ck_assert_ptr_ne(mtr, NULL);
  remove_matrix(&mtr);
  ck_assert_ptr_eq(mtr, NULL);
}
END_TEST

START_TEST(remove_matrix_isnot_one) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(-9, -9, &mtr);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  remove_matrix(&mtr);
  ck_assert_ptr_eq(mtr, NULL);
}

START_TEST(remove_matrix_isnot_two) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(0, 0, &mtr);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  remove_matrix(&mtr);
  ck_assert_ptr_eq(mtr, NULL);
}

START_TEST(remove_matrix_isnot_three) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(422, 0, &mtr);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  remove_matrix(&mtr);
  ck_assert_ptr_eq(mtr, NULL);
}

START_TEST(remove_matrix_isnot_four) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(0, 3251, &mtr);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  remove_matrix(&mtr);
  ck_assert_ptr_eq(mtr, NULL);
}

START_TEST(remove_matrix_isnot_five) {
  matrix_t *mtr = NULL;
  int stat = create_matrix(914, 0, &mtr);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(mtr, NULL);
  remove_matrix(&mtr);
  ck_assert_ptr_eq(mtr, NULL);
}

START_TEST(eq_matrix_normal_one) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL;
  int stat = create_matrix(7, 9, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(7, 9, &mtr_two);
  ck_assert_int_eq(stat, ok);
  stat = eq_matrix(mtr_one, mtr_two, 6);
  ck_assert_int_eq(stat, success);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
}
END_TEST

START_TEST(eq_matrix_normal_two) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL;
  int stat = create_matrix(431, 8941, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(431, 8941, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 89;
  mtr_two->matrix[0][0] = 89;
  stat = eq_matrix(mtr_one, mtr_two, 6);
  ck_assert_int_eq(stat, success);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
}
END_TEST

START_TEST(eq_matrix_normal_three) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL;
  int stat = create_matrix(1, 1, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(1, 1, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 1782;
  mtr_two->matrix[0][0] = 1782;
  stat = eq_matrix(mtr_one, mtr_two, 6);
  ck_assert_int_eq(stat, success);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
}
END_TEST

START_TEST(eq_matrix_normal_four) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL;
  int stat = create_matrix(78, 42, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(78, 42, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 13;
  mtr_two->matrix[0][0] = 13;
  stat = eq_matrix(mtr_one, mtr_two, 6);
  ck_assert_int_eq(stat, success);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
}
END_TEST

START_TEST(eq_matrix_normal_five) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL;
  int stat = create_matrix(41, 89, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(41, 89, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 889;
  mtr_two->matrix[0][0] = 889;
  stat = eq_matrix(mtr_one, mtr_two, 6);
  ck_assert_int_eq(stat, success);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
}
END_TEST

START_TEST(eq_matrix_isnot_one) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL;
  int stat = create_matrix(41, 89, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(54, 12, &mtr_two);
  ck_assert_int_eq(stat, ok);
  stat = eq_matrix(mtr_one, mtr_two, 3);
  ck_assert_int_eq(stat, failure);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
}
END_TEST

START_TEST(eq_matrix_isnot_two) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL;
  int stat = create_matrix(64, 32, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(432, 13, &mtr_two);
  ck_assert_int_eq(stat, ok);
  stat = eq_matrix(mtr_one, mtr_two, 3);
  ck_assert_int_eq(stat, failure);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
}
END_TEST

START_TEST(eq_matrix_isnot_three) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL;
  int stat = create_matrix(123, 321, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(64, 22, &mtr_two);
  ck_assert_int_eq(stat, ok);
  stat = eq_matrix(mtr_one, mtr_two, 3);
  ck_assert_int_eq(stat, failure);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
}
END_TEST

START_TEST(eq_matrix_isnot_four) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL;
  int stat = create_matrix(45, 45, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(45, 45, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 123;
  mtr_two->matrix[0][0] = 345;
  stat = eq_matrix(mtr_one, mtr_two, 3);
  ck_assert_int_eq(stat, failure);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
}
END_TEST

START_TEST(eq_matrix_isnot_five) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL;
  int stat = create_matrix(34, 34, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(34, 34, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 7513;
  mtr_two->matrix[0][0] = 1247;
  stat = eq_matrix(mtr_one, mtr_two, 3);
  ck_assert_int_eq(stat, failure);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
}
END_TEST

START_TEST(eq_matrix_isnot_matrix_one) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL;
  int stat = create_matrix(0, 0, &mtr_one);
  ck_assert_int_eq(stat, ncm_error);
  stat = create_matrix(0, 0, &mtr_two);
  ck_assert_int_eq(stat, ncm_error);
  stat = eq_matrix(mtr_one, mtr_two, 3);
  ck_assert_int_eq(stat, failure);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
}
END_TEST

START_TEST(eq_matrix_isnot_matrix_two) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL;
  int stat = create_matrix(54, 56, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(0, 0, &mtr_two);
  ck_assert_int_eq(stat, ncm_error);
  stat = eq_matrix(mtr_one, mtr_two, 3);
  ck_assert_int_eq(stat, failure);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
}
END_TEST

START_TEST(eq_matrix_isnot_matrix_three) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL;
  int stat = create_matrix(0, 0, &mtr_one);
  ck_assert_int_eq(stat, ncm_error);
  stat = create_matrix(43, 43, &mtr_two);
  ck_assert_int_eq(stat, ok);
  stat = eq_matrix(mtr_one, mtr_two, 3);
  ck_assert_int_eq(stat, failure);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
}
END_TEST

START_TEST(sum_matrix_normal_one) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(9, 9, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(9, 9, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 89;
  mtr_two->matrix[0][0] = 32;
  stat = sum_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_int_eq(result->matrix[0][0],
                   mtr_one->matrix[0][0] + mtr_two->matrix[0][0]);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  remove_matrix(&result);
}
END_TEST

START_TEST(sum_matrix_normal_two) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(142, 532, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(142, 532, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 42;
  mtr_two->matrix[0][0] = 74;
  stat = sum_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_int_eq(result->matrix[0][0],
                   mtr_one->matrix[0][0] + mtr_two->matrix[0][0]);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  remove_matrix(&result);
}
END_TEST

START_TEST(sum_matrix_normal_three) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(678, 123, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(678, 123, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 12;
  mtr_two->matrix[0][0] = 42;
  stat = sum_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_int_eq(result->matrix[0][0],
                   mtr_one->matrix[0][0] + mtr_two->matrix[0][0]);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  remove_matrix(&result);
}
END_TEST

START_TEST(sum_matrix_normal_four) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(1, 1, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(1, 1, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 423;
  mtr_two->matrix[0][0] = 1535;
  stat = sum_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_int_eq(result->matrix[0][0],
                   mtr_one->matrix[0][0] + mtr_two->matrix[0][0]);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  remove_matrix(&result);
}
END_TEST

START_TEST(sum_matrix_normal_five) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(2, 2, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(2, 2, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 4112;
  mtr_two->matrix[0][0] = 5231;
  stat = sum_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_int_eq(result->matrix[0][0],
                   mtr_one->matrix[0][0] + mtr_two->matrix[0][0]);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  remove_matrix(&result);
}
END_TEST

START_TEST(sum_matrix_isnot_correct_one) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(76, 54, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(76, 43, &mtr_two);
  stat = sum_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(sum_matrix_isnot_correct_two) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(32, 12, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(1, 1, &mtr_two);
  stat = sum_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(sum_matrix_isnot_correct_three) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(521, 521, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(789, 12, &mtr_two);
  stat = sum_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(sum_matrix_isnot_correct_four) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(432, 124, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(742, 412, &mtr_two);
  stat = sum_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(sum_matrix_isnot_correct_five) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(532, 124, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(1424, 124, &mtr_two);
  stat = sum_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(sum_matrix_isnot_matrix_one) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = sum_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(sum_matrix_isnot_matrix_two) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(7, 9, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = sum_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(result, NULL);
  remove_matrix(&mtr_one);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(sum_matrix_isnot_matrix_three) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(12, 32, &mtr_two);
  ck_assert_int_eq(stat, ok);
  stat = sum_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(result, NULL);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(sum_matrix_isnot_matrix_four) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(54, 23, &result);
  ck_assert_int_eq(stat, ok);
  stat = sum_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&result);
}
END_TEST

START_TEST(sum_matrix_isnot_matrix_five) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(67, 67, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(67, 67, &mtr_two);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(67, 67, &result);
  ck_assert_int_eq(stat, ok);
  stat = sum_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  remove_matrix(&result);
}
END_TEST

START_TEST(sub_matrix_normal_one) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(32, 32, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(32, 32, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 123;
  mtr_two->matrix[0][0] = 123;
  stat = sub_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_int_eq(result->matrix[0][0],
                   mtr_one->matrix[0][0] - mtr_two->matrix[0][0]);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  remove_matrix(&result);
}
END_TEST

START_TEST(sub_matrix_normal_two) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(543, 123, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(543, 123, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 542;
  mtr_two->matrix[0][0] = 74;
  stat = sub_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_int_eq(result->matrix[0][0],
                   mtr_one->matrix[0][0] - mtr_two->matrix[0][0]);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  remove_matrix(&result);
}
END_TEST

START_TEST(sub_matrix_normal_three) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(532, 754, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(532, 754, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 864;
  mtr_two->matrix[0][0] = 2353;
  stat = sub_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_int_eq(result->matrix[0][0],
                   mtr_one->matrix[0][0] - mtr_two->matrix[0][0]);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  remove_matrix(&result);
}
END_TEST

START_TEST(sub_matrix_normal_four) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(1, 1, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(1, 1, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 4232;
  mtr_two->matrix[0][0] = 15335;
  stat = sub_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_int_eq(result->matrix[0][0],
                   mtr_one->matrix[0][0] - mtr_two->matrix[0][0]);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  remove_matrix(&result);
}
END_TEST

START_TEST(sub_matrix_normal_five) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(2, 2, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(2, 2, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 532;
  mtr_two->matrix[0][0] = 2893;
  stat = sub_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_int_eq(result->matrix[0][0],
                   mtr_one->matrix[0][0] - mtr_two->matrix[0][0]);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  remove_matrix(&result);
}
END_TEST

START_TEST(sub_matrix_isnot_correct_one) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(87, 43, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(87, 23, &mtr_two);
  stat = sub_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(sub_matrix_isnot_correct_two) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(23, 43, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(1, 1, &mtr_two);
  stat = sub_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(sub_matrix_isnot_correct_three) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(7, 8, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(34, 12, &mtr_two);
  stat = sub_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(sub_matrix_isnot_correct_four) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(412, 742, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(742, 412, &mtr_two);
  stat = sub_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(sub_matrix_isnot_correct_five) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(1, 124, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(124, 124, &mtr_two);
  stat = sub_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(sub_matrix_isnot_matrix_one) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = sub_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(sub_matrix_isnot_matrix_two) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(9, 21, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = sub_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(result, NULL);
  remove_matrix(&mtr_one);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(sub_matrix_isnot_matrix_three) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(67, 42, &mtr_two);
  ck_assert_int_eq(stat, ok);
  stat = sub_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(result, NULL);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(sub_matrix_isnot_matrix_four) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(32, 76, &result);
  ck_assert_int_eq(stat, ok);
  stat = sub_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&result);
}
END_TEST

START_TEST(sub_matrix_isnot_matrix_five) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(89, 89, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(89, 89, &mtr_two);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(89, 89, &result);
  ck_assert_int_eq(stat, ok);
  stat = sub_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  remove_matrix(&result);
}
END_TEST

START_TEST(mult_number_is_normal_one) {
  matrix_t *mtr = NULL, *result = NULL;
  double num = 78;
  int stat = create_matrix(89, 32, &mtr);
  ck_assert_int_eq(stat, ok);
  mtr->matrix[0][0] = 90;
  stat = mult_number(mtr, num, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_ptr_ne(result, NULL);
  ck_assert_int_eq(mtr->matrix[0][0] * num, result->matrix[0][0]);
  remove_matrix(&mtr);
  remove_matrix(&result);
}
END_TEST

START_TEST(mult_number_is_normal_two) {
  matrix_t *mtr = NULL, *result = NULL;
  double num = 6417;
  int stat = create_matrix(1, 1, &mtr);
  ck_assert_int_eq(stat, ok);
  mtr->matrix[0][0] = 53;
  stat = mult_number(mtr, num, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_ptr_ne(result, NULL);
  ck_assert_int_eq(mtr->matrix[0][0] * num, result->matrix[0][0]);
  remove_matrix(&mtr);
  remove_matrix(&result);
}
END_TEST

START_TEST(mult_number_is_normal_three) {
  matrix_t *mtr = NULL, *result = NULL;
  double num = 0;
  int stat = create_matrix(32, 76, &mtr);
  ck_assert_int_eq(stat, ok);
  mtr->matrix[0][0] = 12;
  stat = mult_number(mtr, num, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_ptr_ne(result, NULL);
  ck_assert_int_eq(mtr->matrix[0][0] * num, result->matrix[0][0]);
  remove_matrix(&mtr);
  remove_matrix(&result);
}
END_TEST

START_TEST(mult_number_is_normal_four) {
  matrix_t *mtr = NULL, *result = NULL;
  double num = -92;
  int stat = create_matrix(12, 12, &mtr);
  ck_assert_int_eq(stat, ok);
  mtr->matrix[1][1] = 34;
  stat = mult_number(mtr, num, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_ptr_ne(result, NULL);
  ck_assert_int_eq(mtr->matrix[1][1] * num, result->matrix[1][1]);
  remove_matrix(&mtr);
  remove_matrix(&result);
}
END_TEST

START_TEST(mult_number_is_normal_five) {
  matrix_t *mtr = NULL, *result = NULL;
  double num = -82532;
  int stat = create_matrix(1, 1, &mtr);
  ck_assert_int_eq(stat, ok);
  mtr->matrix[0][0] = -23;
  stat = mult_number(mtr, num, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_ptr_ne(result, NULL);
  ck_assert_int_eq(mtr->matrix[0][0] * num, result->matrix[0][0]);
  remove_matrix(&mtr);
  remove_matrix(&result);
}
END_TEST

START_TEST(mult_number_is_normal_six) {
  matrix_t *mtr = NULL, *result = NULL;
  double num = 4315353;
  int stat = create_matrix(1234, 463, &mtr);
  ck_assert_int_eq(stat, ok);
  mtr->matrix[0][0] = 0;
  stat = mult_number(mtr, num, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_ptr_ne(result, NULL);
  ck_assert_int_eq(mtr->matrix[0][0] * num, result->matrix[0][0]);
  remove_matrix(&mtr);
  remove_matrix(&result);
}
END_TEST

START_TEST(mult_number_is_normal_seven) {
  matrix_t *mtr = NULL, *result = NULL;
  double num = -1;
  int stat = create_matrix(10, 10, &mtr);
  ck_assert_int_eq(stat, ok);
  mtr->matrix[0][0] = 90;
  stat = mult_number(mtr, num, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_ptr_ne(result, NULL);
  ck_assert_int_eq(mtr->matrix[0][0] * num, result->matrix[0][0]);
  remove_matrix(&mtr);
  remove_matrix(&result);
}
END_TEST

START_TEST(mult_number_is_normal_eight) {
  matrix_t *mtr = NULL, *result = NULL;
  double num = 0;
  int stat = create_matrix(1, 1, &mtr);
  ck_assert_int_eq(stat, ok);
  mtr->matrix[0][0] = 0;
  stat = mult_number(mtr, num, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_ptr_ne(result, NULL);
  ck_assert_int_eq(mtr->matrix[0][0] * num, result->matrix[0][0]);
  remove_matrix(&mtr);
  remove_matrix(&result);
}
END_TEST

START_TEST(mult_number_isnot_matrix_one) {
  matrix_t *mtr = NULL, *result = NULL;
  double num = 90;
  int stat = mult_number(mtr, num, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(mult_number_isnot_matrix_two) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(53, 53, &result);
  double num = 53;
  stat = mult_number(mtr, num, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(mult_number_isnot_matrix_three) {
  matrix_t *mtr = NULL, *result = NULL;
  create_matrix(-9, 0, &mtr);
  double num = 0;
  int stat = mult_number(mtr, num, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
}
END_TEST

Suite *MatrixTest(void) {
  Suite *suite = suite_create("MatrixTest");
  TCase *tcase = tcase_create("MatrixTest");

  // Нормальное значение размерности
  tcase_add_test(tcase, create_matrix_normal_one);
  tcase_add_test(tcase, create_matrix_normal_two);
  tcase_add_test(tcase, create_matrix_normal_three);
  tcase_add_test(tcase, create_matrix_normal_four);
  tcase_add_test(tcase, create_matrix_normal_five);

  // Ненулевая матрица
  tcase_add_test(tcase, create_matrix_isnot_null_one);
  tcase_add_test(tcase, create_matrix_isnot_null_two);
  tcase_add_test(tcase, create_matrix_isnot_null_three);

  // Нулевые значения размерности
  tcase_add_test(tcase, create_matrix_isnull_size_one);
  tcase_add_test(tcase, create_matrix_isnull_size_two);
  tcase_add_test(tcase, create_matrix_isnull_size_three);
  tcase_add_test(tcase, create_matrix_isnull_size_four);
  tcase_add_test(tcase, create_matrix_isnull_size_five);

  // Отрицательные значения размерости
  tcase_add_test(tcase, create_matrix_isnegative_size_one);
  tcase_add_test(tcase, create_matrix_isnegative_size_two);
  tcase_add_test(tcase, create_matrix_isnegative_size_three);
  tcase_add_test(tcase, create_matrix_isnegative_size_four);
  tcase_add_test(tcase, create_matrix_isnegative_size_five);

  // Большие значения размерности
  tcase_add_test(tcase, create_matrix_islarge_size_one);
  tcase_add_test(tcase, create_matrix_islarge_size_two);
  tcase_add_test(tcase, create_matrix_islarge_size_three);
  tcase_add_test(tcase, create_matrix_islarge_size_four);
  tcase_add_test(tcase, create_matrix_islarge_size_five);

  // Удаление матрицы нормальной размерности
  tcase_add_test(tcase, remove_matrix_normal_one);
  tcase_add_test(tcase, remove_matrix_normal_two);
  tcase_add_test(tcase, remove_matrix_normal_three);
  tcase_add_test(tcase, remove_matrix_normal_four);
  tcase_add_test(tcase, remove_matrix_normal_five);

  // Удаление несуществующие матрицы
  tcase_add_test(tcase, remove_matrix_isnot_one);
  tcase_add_test(tcase, remove_matrix_isnot_two);
  tcase_add_test(tcase, remove_matrix_isnot_three);
  tcase_add_test(tcase, remove_matrix_isnot_four);
  tcase_add_test(tcase, remove_matrix_isnot_five);

  // Сравнение матриц нормальной размерности заведомо равных
  tcase_add_test(tcase, eq_matrix_normal_one);
  tcase_add_test(tcase, eq_matrix_normal_two);
  tcase_add_test(tcase, eq_matrix_normal_three);
  tcase_add_test(tcase, eq_matrix_normal_four);
  tcase_add_test(tcase, eq_matrix_normal_five);

  // Сравнение матриц нормальной размерности заведомо неравных
  tcase_add_test(tcase, eq_matrix_isnot_one);
  tcase_add_test(tcase, eq_matrix_isnot_two);
  tcase_add_test(tcase, eq_matrix_isnot_three);
  tcase_add_test(tcase, eq_matrix_isnot_four);
  tcase_add_test(tcase, eq_matrix_isnot_five);

  // Сравнение несуществующих матриц
  tcase_add_test(tcase, eq_matrix_isnot_matrix_one);
  tcase_add_test(tcase, eq_matrix_isnot_matrix_two);
  tcase_add_test(tcase, eq_matrix_isnot_matrix_three);

  // Суммирование матриц нормальной размерности
  tcase_add_test(tcase, sum_matrix_normal_one);
  tcase_add_test(tcase, sum_matrix_normal_two);
  tcase_add_test(tcase, sum_matrix_normal_three);
  tcase_add_test(tcase, sum_matrix_normal_four);
  tcase_add_test(tcase, sum_matrix_normal_five);

  // Суммирование матриц разной размерности
  tcase_add_test(tcase, sum_matrix_isnot_correct_one);
  tcase_add_test(tcase, sum_matrix_isnot_correct_two);
  tcase_add_test(tcase, sum_matrix_isnot_correct_three);
  tcase_add_test(tcase, sum_matrix_isnot_correct_four);
  tcase_add_test(tcase, sum_matrix_isnot_correct_five);

  // Суммирование несуществующих матриц
  tcase_add_test(tcase, sum_matrix_isnot_matrix_one);
  tcase_add_test(tcase, sum_matrix_isnot_matrix_two);
  tcase_add_test(tcase, sum_matrix_isnot_matrix_three);
  tcase_add_test(tcase, sum_matrix_isnot_matrix_four);
  tcase_add_test(tcase, sum_matrix_isnot_matrix_five);

  // Разница матриц нормальной размерности
  tcase_add_test(tcase, sub_matrix_normal_one);
  tcase_add_test(tcase, sub_matrix_normal_two);
  tcase_add_test(tcase, sub_matrix_normal_three);
  tcase_add_test(tcase, sub_matrix_normal_four);
  tcase_add_test(tcase, sub_matrix_normal_five);

  // Разница матриц разной размерности
  tcase_add_test(tcase, sub_matrix_isnot_correct_one);
  tcase_add_test(tcase, sub_matrix_isnot_correct_two);
  tcase_add_test(tcase, sub_matrix_isnot_correct_three);
  tcase_add_test(tcase, sub_matrix_isnot_correct_four);
  tcase_add_test(tcase, sub_matrix_isnot_correct_five);

  // Разница несуществующих матриц
  tcase_add_test(tcase, sub_matrix_isnot_matrix_one);
  tcase_add_test(tcase, sub_matrix_isnot_matrix_two);
  tcase_add_test(tcase, sub_matrix_isnot_matrix_three);
  tcase_add_test(tcase, sub_matrix_isnot_matrix_four);
  tcase_add_test(tcase, sub_matrix_isnot_matrix_five);

  // Умножение на число заведомо верной матрицы
  tcase_add_test(tcase, mult_number_is_normal_one);
  tcase_add_test(tcase, mult_number_is_normal_two);
  tcase_add_test(tcase, mult_number_is_normal_three);
  tcase_add_test(tcase, mult_number_is_normal_four);
  tcase_add_test(tcase, mult_number_is_normal_five);
  tcase_add_test(tcase, mult_number_is_normal_six);
  tcase_add_test(tcase, mult_number_is_normal_seven);
  tcase_add_test(tcase, mult_number_is_normal_eight);

  // Умножение на число несуществующей матрицы
  tcase_add_test(tcase, mult_number_isnot_matrix_one);
  tcase_add_test(tcase, mult_number_isnot_matrix_two);
  tcase_add_test(tcase, mult_number_isnot_matrix_three);

  suite_add_tcase(suite, tcase);
  return suite;
}

int main() {
  Suite *suite = MatrixTest();
  SRunner *sRunner = srunner_create(suite);
  srunner_set_fork_status(sRunner, CK_NOFORK);
  srunner_run_all(sRunner, CK_VERBOSE);
  int total_tests = srunner_ntests_run(sRunner);
  int failed_test = srunner_ntests_failed(sRunner);
  srunner_free(sRunner);
  printf("Всего выполнено тестов: %d\n", total_tests);
  printf("Всего проваленно тестов: %d\n", failed_test);
  return 0;
}