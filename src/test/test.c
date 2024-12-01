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

START_TEST(mult_matrix_normal_one) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(3, 3, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(3, 3, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 9;
  mtr_two->matrix[0][0] = 7284;
  stat = mult_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_int_eq(mtr_one->matrix[0][0] * mtr_two->matrix[0][0],
                   result->matrix[0][0]);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}

START_TEST(mult_matrix_normal_two) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(2, 1, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(1, 2, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 9;
  mtr_two->matrix[0][1] = 7284;
  stat = mult_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_int_eq(mtr_one->matrix[0][0] * mtr_two->matrix[0][1],
                   result->matrix[0][1]);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}

START_TEST(mult_matrix_normal_three) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(5, 5, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(5, 5, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = -13;
  mtr_two->matrix[0][0] = 24151;
  stat = mult_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_int_eq(mtr_one->matrix[0][0] * mtr_two->matrix[0][0],
                   result->matrix[0][0]);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}

START_TEST(mult_matrix_normal_four) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(1, 1, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(1, 1, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[0][0] = 0;
  mtr_two->matrix[0][0] = 14;
  stat = mult_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_int_eq(mtr_one->matrix[0][0] * mtr_two->matrix[0][0],
                   result->matrix[0][0]);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}

START_TEST(mult_matrix_normal_five) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(15, 15, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(15, 15, &mtr_two);
  ck_assert_int_eq(stat, ok);
  mtr_one->matrix[1][1] = -532;
  mtr_two->matrix[1][1] = -1421;
  stat = mult_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_int_eq(mtr_one->matrix[1][1] * mtr_two->matrix[1][1],
                   result->matrix[1][1]);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}

START_TEST(mult_matrix_isnot_correct_size_one) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(432, 521, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(51, 73, &mtr_two);
  ck_assert_int_eq(stat, ok);
  stat = mult_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(result, NULL);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(mult_matrix_isnot_correct_size_two) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(1, 1, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(41, 124, &mtr_two);
  ck_assert_int_eq(stat, ok);
  stat = mult_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(result, NULL);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(mult_matrix_isnot_correct_size_three) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(532, 123, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(12, 53, &mtr_two);
  ck_assert_int_eq(stat, ok);
  stat = mult_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(result, NULL);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(mult_matrix_isnot_correct_size_four) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(432, 585, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(568, 583, &mtr_two);
  ck_assert_int_eq(stat, ok);
  stat = mult_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(result, NULL);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(mult_matrix_isnot_correct_size_five) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(23, 52, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(23, 432, &mtr_two);
  ck_assert_int_eq(stat, ok);
  stat = mult_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  ck_assert_ptr_eq(result, NULL);
  remove_matrix(&mtr_one);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(mult_matrix_isnot_matrix_one) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = mult_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(mult_matrix_isnot_matrix_two) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(43, 522, &mtr_one);
  ck_assert_int_eq(stat, ok);
  stat = mult_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&mtr_one);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(mult_matrix_isnot_matrix_three) {
  matrix_t *mtr_one = NULL, *mtr_two = NULL, *result = NULL;
  int stat = create_matrix(43, 522, &mtr_two);
  ck_assert_int_eq(stat, ok);
  stat = mult_matrix(mtr_one, mtr_two, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&mtr_two);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(transpose_normal_one) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(6, 3, &mtr);
  ck_assert_int_eq(stat, ok);
  mtr->matrix[0][0] = 9;
  mtr->matrix[5][2] = 43;
  stat = transpose(mtr, &result);
  ck_assert_int_eq(result->matrix[0][0], 9);
  ck_assert_int_eq(result->matrix[2][5], 43);
  remove_matrix(&mtr);
  remove_matrix(&result);
}
END_TEST

START_TEST(transpose_normal_two) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(94, 43, &mtr);
  ck_assert_int_eq(stat, ok);
  mtr->matrix[0][0] = 12;
  mtr->matrix[93][42] = 353;
  stat = transpose(mtr, &result);
  ck_assert_int_eq(result->matrix[0][0], 12);
  ck_assert_int_eq(result->matrix[42][93], 353);
  remove_matrix(&mtr);
  remove_matrix(&result);
}
END_TEST

START_TEST(transpose_normal_three) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(34, 34, &mtr);
  ck_assert_int_eq(stat, ok);
  mtr->matrix[0][0] = 12;
  mtr->matrix[33][33] = 632;
  stat = transpose(mtr, &result);
  ck_assert_int_eq(result->matrix[0][0], 12);
  ck_assert_int_eq(result->matrix[33][33], 632);
  remove_matrix(&mtr);
  remove_matrix(&result);
}
END_TEST

START_TEST(transpose_normal_four) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(76, 12, &mtr);
  ck_assert_int_eq(stat, ok);
  mtr->matrix[0][0] = -7432;
  mtr->matrix[75][11] = -424;
  stat = transpose(mtr, &result);
  ck_assert_int_eq(result->matrix[0][0], -7432);
  ck_assert_int_eq(result->matrix[11][75], -424);
  remove_matrix(&mtr);
  remove_matrix(&result);
}
END_TEST

START_TEST(transpose_normal_five) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(89, 12, &mtr);
  ck_assert_int_eq(stat, ok);
  mtr->matrix[0][0] = -324;
  mtr->matrix[88][11] = -43;
  stat = transpose(mtr, &result);
  ck_assert_int_eq(result->matrix[0][0], -324);
  ck_assert_int_eq(result->matrix[11][88], -43);
  remove_matrix(&mtr);
  remove_matrix(&result);
}
END_TEST

START_TEST(transpose_isnot_matrix_one) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = transpose(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(transpose_isnot_matrix_two) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(43, 54, &result);
  ck_assert_int_eq(stat, ok);
  stat = transpose(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&result);
}
END_TEST

START_TEST(transpose_isnot_matrix_three) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(43, 43, &mtr);
  ck_assert_int_eq(stat, ok);
  stat = create_matrix(43, 43, &result);
  ck_assert_int_eq(stat, ok);
  stat = transpose(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  remove_matrix(&mtr);
  remove_matrix(&result);
}
END_TEST

START_TEST(calc_complements_normal_one) {
  matrix_t *mtr = NULL, *result_cp = NULL, *result = NULL;
  double values[9] = {1, 2, 3, 0, 4, 2, 5, 2, 1};
  double values_ans[9] = {0, 10, -20, 4, -14, 8, -8, -2, 4};
  int stat = create_matrix(3, 3, &mtr);
  stat = create_matrix(3, 3, &result_cp);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values[k];
    }
  }
  for (int i = 0, k = 0; i < result_cp->rows; i++) {
    for (int j = 0; j < result_cp->columns; j++, k++) {
      result_cp->matrix[i][j] = values_ans[k];
    }
  }
  stat = calc_complements(mtr, &result);
  ck_assert_int_eq(stat, ok);
  stat = eq_matrix(result_cp, result, 3);
  ck_assert_int_eq(stat, success);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
  if (result_cp) remove_matrix(&result_cp);
}
END_TEST

START_TEST(calc_complements_normal_two) {
  matrix_t *mtr = NULL, *result_cp = NULL, *result = NULL;
  double values[9] = {5, -1, 1, 2, 3, 4, 1, 0, 3};
  double values_ans[9] = {9, -2, -3, 3, 14, -1, -7, -18, 17};
  int stat = create_matrix(3, 3, &mtr);
  stat = create_matrix(3, 3, &result_cp);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values[k];
    }
  }
  for (int i = 0, k = 0; i < result_cp->rows; i++) {
    for (int j = 0; j < result_cp->columns; j++, k++) {
      result_cp->matrix[i][j] = values_ans[k];
    }
  }
  stat = calc_complements(mtr, &result);
  ck_assert_int_eq(stat, ok);
  stat = eq_matrix(result_cp, result, 3);
  ck_assert_int_eq(stat, success);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
  if (result_cp) remove_matrix(&result_cp);
}
END_TEST

START_TEST(calc_complements_normal_three) {
  matrix_t *mtr = NULL, *result_cp = NULL, *result = NULL;
  double values[9] = {429, 472, 12, 123, 64, 53, 988, 76, 23};
  double values_ans[9] = {-2556,  49535, -53884, -9944, -1989,
                          433732, 24248, -21261, -30600};
  int stat = create_matrix(3, 3, &mtr);
  stat = create_matrix(3, 3, &result_cp);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values[k];
    }
  }
  for (int i = 0, k = 0; i < result_cp->rows; i++) {
    for (int j = 0; j < result_cp->columns; j++, k++) {
      result_cp->matrix[i][j] = values_ans[k];
    }
  }
  stat = calc_complements(mtr, &result);
  ck_assert_int_eq(stat, ok);
  stat = eq_matrix(result_cp, result, 3);
  ck_assert_int_eq(stat, success);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
  if (result_cp) remove_matrix(&result_cp);
}
END_TEST

START_TEST(calc_complements_normal_four) {
  matrix_t *mtr = NULL, *result_cp = NULL, *result = NULL;
  double values[25] = {4,  19, 9,  4,  5,  15, 16, 1, 2, 7, 8, 4, 9,
                       25, 11, 24, 12, 17, 13, 6,  2, 5, 4, 7, 9};
  double values_ans[25] = {-22957, 30157, 13233,  8319,  -24004, 19710,  14662,
                           -43594, 6122,  2088,   -3146, 10530,  -24514, 39770,
                           -25188, 14661, -15121, 30179, -14439, 2960,   -8505,
                           -30947, 36397, -48365, 97580};
  int stat = create_matrix(5, 5, &mtr);
  stat = create_matrix(5, 5, &result_cp);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values[k];
    }
  }
  for (int i = 0, k = 0; i < result_cp->rows; i++) {
    for (int j = 0; j < result_cp->columns; j++, k++) {
      result_cp->matrix[i][j] = values_ans[k];
    }
  }
  stat = calc_complements(mtr, &result);
  ck_assert_int_eq(stat, ok);
  stat = eq_matrix(result_cp, result, 3);
  ck_assert_int_eq(stat, success);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
  if (result_cp) remove_matrix(&result_cp);
}
END_TEST

START_TEST(calc_complements_normal_five) {
  matrix_t *mtr = NULL, *result_cp = NULL, *result = NULL;
  double values[25] = {72, 423, 532, 12, 54, 453, 64, 978, 56, 98, 45, 34, 53,
                       75, 96,  97,  52, 23, 51,  17, 71,  84, 94, 35, 34};
  double values_ans[25] = {
      193772280,   557785,     -94825430,  -423832340,  292442250,
      601115,      34470780,   -29744190,  -32702595,   29480000,
      298556180,   102233710,  -121361205, -665558540,  144628875,
      465248750,   119612250,  -249537750, -1831388500, 1308089875,
      -1385095130, -448708860, 703774155,  3562324265,  -2363426750};
  int stat = create_matrix(5, 5, &mtr);
  stat = create_matrix(5, 5, &result_cp);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values[k];
    }
  }
  for (int i = 0, k = 0; i < result_cp->rows; i++) {
    for (int j = 0; j < result_cp->columns; j++, k++) {
      result_cp->matrix[i][j] = values_ans[k];
    }
  }
  stat = calc_complements(mtr, &result);
  ck_assert_int_eq(stat, ok);
  stat = eq_matrix(result_cp, result, 3);
  ck_assert_int_eq(stat, success);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
  if (result_cp) remove_matrix(&result_cp);
}
END_TEST

START_TEST(calc_complements_isnot_correct_one) {
  matrix_t *mtr = NULL, *result = NULL;
  double values[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int stat = create_matrix(3, 3, &mtr);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values[k];
    }
  }
  stat = calc_complements(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(calc_complements_isnot_correct_two) {
  matrix_t *mtr = NULL, *result = NULL;
  double values[9] = {1, 1, 1, 2, 2, 2, 3, 3, 3};
  int stat = create_matrix(3, 3, &mtr);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values[k];
    }
  }
  stat = calc_complements(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(calc_complements_isnot_correct_three) {
  matrix_t *mtr = NULL, *result = NULL;
  double values[9] = {2, 4, 6, 1, 2, 3, 3, 6, 9};
  int stat = create_matrix(3, 3, &mtr);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values[k];
    }
  }
  stat = calc_complements(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(calc_complements_isnot_correct_four) {
  matrix_t *mtr = NULL, *result = NULL;
  double values[25] = {1,  2,  3, 4, 5,  2,  4,  6, 8,  10, 3,  6, 9,
                       12, 15, 4, 8, 12, 16, 20, 5, 10, 15, 20, 25};
  int stat = create_matrix(5, 5, &mtr);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values[k];
    }
  }
  stat = calc_complements(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(calc_complements_isnot_correct_five) {
  matrix_t *mtr = NULL, *result = NULL;
  double values[25] = {1, 2,  3,  4,  5,  0,  0,  0,  0,  0,  6,  7, 8,
                       9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  int stat = create_matrix(5, 5, &mtr);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values[k];
    }
  }
  stat = calc_complements(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(calc_complements_isnot_matrix_one) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = calc_complements(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(calc_complements_isnot_matrix_two) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(3, 3, &result);
  ck_assert_int_eq(stat, ok);
  stat = calc_complements(mtr, &result);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(calc_complements_isnot_matrix_three) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = calc_complements(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(calc_complements_isnot_correct_m_one) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(3, 4, &mtr);
  stat = calc_complements(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (result) remove_matrix(&result);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(calc_complements_isnot_correct_m_two) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(54, 45, &mtr);
  stat = calc_complements(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (result) remove_matrix(&result);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(calc_complements_isnot_correct_m_three) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(12, 11, &mtr);
  stat = calc_complements(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (result) remove_matrix(&result);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(determinant_normal_one) {
  matrix_t *mtr = NULL;
  double result = 0;
  double values_mtr[9] = {7, 23, 11, 1, 3, 4, 24, 39, 16};
  double value_res = 721;
  int stat = create_matrix(3, 3, &mtr);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values_mtr[k];
    }
  }
  stat = determinant(mtr, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_double_eq(result, value_res);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(determinant_normal_two) {
  matrix_t *mtr = NULL;
  double result = 0;
  double values_mtr[9] = {2, 9, 61, 6, 29, 4, 2, 23, 43};
  double value_res = 4940;
  int stat = create_matrix(3, 3, &mtr);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values_mtr[k];
    }
  }
  stat = determinant(mtr, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_double_eq(result, value_res);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(determinant_normal_three) {
  matrix_t *mtr = NULL;
  double result = 0;
  double values_mtr[9] = {0, 1, 32, 665, 4, 12, 7, 54, 86};
  double value_res = 1091118;
  int stat = create_matrix(3, 3, &mtr);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values_mtr[k];
    }
  }
  stat = determinant(mtr, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_double_eq(result, value_res);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(determinant_normal_four) {
  matrix_t *mtr = NULL;
  double result = 0;
  double values_mtr[25] = {65, 34, 11, 54, 1,  14, 11, 12, 2,  41, 9,  32, 5,
                           93, 52, 19, 14, 59, 19, 18, 14, 12, 13, 18, 16};
  double value_res = 10913320;
  int stat = create_matrix(5, 5, &mtr);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values_mtr[k];
    }
  }
  stat = determinant(mtr, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_double_eq(result, value_res);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(determinant_normal_five) {
  matrix_t *mtr = NULL;
  double result = 0;
  double values_mtr[25] = {1, 6, 2,  9,  13, 17, 32, 23, 7,  14, 8,  9, 16,
                           3, 2, 16, 17, 28, 4,  15, 11, 10, 12, 21, 2};
  double value_res = 303225;
  int stat = create_matrix(5, 5, &mtr);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values_mtr[k];
    }
  }
  stat = determinant(mtr, &result);
  ck_assert_int_eq(stat, ok);
  ck_assert_double_eq(result, value_res);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(determinant_isnot_matrix) {
  matrix_t *mtr = NULL;
  double result = 0;
  int stat = determinant(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
}
END_TEST

START_TEST(determinant_isnot_correct_matrix_one) {
  matrix_t *mtr = NULL;
  double result = 0;
  int val = 1;
  int stat = create_matrix(3, 4, &mtr);
  for (int i = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++) {
      mtr->matrix[i][j] = val++;
    }
  }
  stat = determinant(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
}

START_TEST(determinant_isnot_correct_matrix_two) {
  matrix_t *mtr = NULL;
  double result = 0;
  int val = 1;
  int stat = create_matrix(21, 12, &mtr);
  for (int i = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++) {
      mtr->matrix[i][j] = val++;
    }
  }
  stat = determinant(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
}

START_TEST(determinant_isnot_correct_matrix_three) {
  matrix_t *mtr = NULL;
  double result = 0;
  int val = 1;
  int stat = create_matrix(14, 15, &mtr);
  for (int i = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++) {
      mtr->matrix[i][j] = val++;
    }
  }
  stat = determinant(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
}

START_TEST(determinant_isnot_correct_matrix_four) {
  matrix_t *mtr = NULL;
  double result = 0;
  int val = 1;
  int stat = create_matrix(75, 32, &mtr);
  for (int i = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++) {
      mtr->matrix[i][j] = val++;
    }
  }
  stat = determinant(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
}

START_TEST(determinant_isnot_correct_matrix_five) {
  matrix_t *mtr = NULL;
  double result = 0;
  int val = 1;
  int stat = create_matrix(12, 21, &mtr);
  for (int i = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++) {
      mtr->matrix[i][j] = val++;
    }
  }
  stat = determinant(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
}

START_TEST(inverse_matrix_normal_one) {
  matrix_t *mtr = NULL, *result = NULL, *result_cp = NULL;
  double values[9] = {2, 5, 7, 6, 3, 4, 5, -2, -3};
  double values_res[9] = {1, -1, 1, -38, 41, -34, 27, -29, 24};
  int stat = create_matrix(3, 3, &mtr);
  stat = create_matrix(3, 3, &result_cp);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values[k];
    }
  }
  for (int i = 0, k = 0; i < result_cp->rows; i++) {
    for (int j = 0; j < result_cp->columns; j++, k++) {
      result_cp->matrix[i][j] = values_res[k];
    }
  }
  stat = inverse_matrix(mtr, &result);
  ck_assert_int_eq(stat, ok);
  stat = eq_matrix(result, result_cp, 4);
  ck_assert_int_eq(stat, success);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
  if (result_cp) remove_matrix(&result_cp);
}
END_TEST

START_TEST(inverse_matrix_normal_two) {
  matrix_t *mtr = NULL, *result = NULL, *result_cp = NULL;
  double values[9] = {4, 2, 1, 3, 5, 2, 2, 1, 3};
  double values_res[9] = {0.3714,  -0.1428, -0.0285, -0.1428, 0.2857,
                          -0.1428, -0.2000, -0.0000, 0.4000};
  int stat = create_matrix(3, 3, &mtr);
  stat = create_matrix(3, 3, &result_cp);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values[k];
    }
  }
  for (int i = 0, k = 0; i < result_cp->rows; i++) {
    for (int j = 0; j < result_cp->columns; j++, k++) {
      result_cp->matrix[i][j] = values_res[k];
    }
  }
  stat = inverse_matrix(mtr, &result);
  ck_assert_int_eq(stat, ok);
  stat = eq_matrix(result, result_cp, 2);
  ck_assert_int_eq(stat, success);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
  if (result_cp) remove_matrix(&result_cp);
}
END_TEST

START_TEST(inverse_matrix_normal_three) {
  matrix_t *mtr = NULL, *result = NULL, *result_cp = NULL;
  double values[9] = {2, 1, 1, 1, 3, 2, 1, 1, 2};
  double values_res[9] = {0.6666,  -0.1666, -0.1666, -0.0000, 0.5000,
                          -0.5000, -0.3333, -0.1666, 0.8333};
  int stat = create_matrix(3, 3, &mtr);
  stat = create_matrix(3, 3, &result_cp);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values[k];
    }
  }
  for (int i = 0, k = 0; i < result_cp->rows; i++) {
    for (int j = 0; j < result_cp->columns; j++, k++) {
      result_cp->matrix[i][j] = values_res[k];
    }
  }
  stat = inverse_matrix(mtr, &result);
  ck_assert_int_eq(stat, ok);
  stat = eq_matrix(result, result_cp, 4);
  ck_assert_int_eq(stat, success);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
  if (result_cp) remove_matrix(&result_cp);
}
END_TEST

START_TEST(inverse_matrix_normal_four) {
  matrix_t *mtr = NULL, *result = NULL, *result_cp = NULL;
  double values[25] = {65, 34, 11, 54, 1,  14, 11, 12, 2,  41, 9,  32, 5,
                       93, 52, 19, 14, 59, 19, 18, 14, 12, 13, 18, 16};
  double values_res[25] = {0.0616,  0.0948,  0.0289,  0.0557,  -0.4036,
                           -0.1424, -0.2547, -0.1141, -0.1854, 1.2413,
                           -0.0019, -0.0027, 0.0001,  0.0218,  -0.0179,
                           0.0341,  0.0456,  0.0366,  0.0448,  -0.2887,
                           0.0160,  0.0589,  0.0189,  0.0221,  -0.1758};
  int stat = create_matrix(5, 5, &mtr);
  stat = create_matrix(5, 5, &result_cp);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values[k];
    }
  }
  for (int i = 0, k = 0; i < result_cp->rows; i++) {
    for (int j = 0; j < result_cp->columns; j++, k++) {
      result_cp->matrix[i][j] = values_res[k];
    }
  }
  stat = inverse_matrix(mtr, &result);
  ck_assert_int_eq(stat, ok);
  stat = eq_matrix(result, result_cp, 4);
  ck_assert_int_eq(stat, success);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
  if (result_cp) remove_matrix(&result_cp);
}
END_TEST

START_TEST(inverse_matrix_normal_five) {
  matrix_t *mtr = NULL, *result = NULL, *result_cp = NULL;
  double values[25] = {1, 6, 2,  9,  13, 17, 32, 23, 7,  14, 8,  9, 16,
                       3, 2, 16, 17, 28, 4,  15, 11, 10, 12, 21, 2};
  double values_res[25] = {-0.1961, 0.0204,  -0.4183, 0.1933,  0.1002,
                           0.0290,  0.0551,  0.0849,  -0.0844, -0.0269,
                           0.0685,  -0.0370, 0.2231,  -0.0492, -0.0395,
                           0.0463,  -0.0147, 0.0590,  -0.0384, 0.0315,
                           0.0359,  -0.0111, -0.0822, 0.0583,  -0.0110};
  int stat = create_matrix(5, 5, &mtr);
  stat = create_matrix(5, 5, &result_cp);
  ck_assert_int_eq(stat, ok);
  for (int i = 0, k = 0; i < mtr->rows; i++) {
    for (int j = 0; j < mtr->columns; j++, k++) {
      mtr->matrix[i][j] = values[k];
    }
  }
  for (int i = 0, k = 0; i < result_cp->rows; i++) {
    for (int j = 0; j < result_cp->columns; j++, k++) {
      result_cp->matrix[i][j] = values_res[k];
    }
  }
  stat = inverse_matrix(mtr, &result);
  ck_assert_int_eq(stat, ok);
  stat = eq_matrix(result, result_cp, 3);
  ck_assert_int_eq(stat, success);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
  if (result_cp) remove_matrix(&result_cp);
}
END_TEST

START_TEST(inverse_matrix_isnot_matrix_one) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = inverse_matrix(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(inverse_matrix_isnot_matrix_two) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(3, 3, &result);
  ck_assert_int_eq(stat, ok);
  stat = inverse_matrix(mtr, &result);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(inverse_matrix_isnot_matrix_three) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(3, 3, &mtr);
  stat = create_matrix(3, 3, &result);
  ck_assert_int_eq(stat, ok);
  stat = inverse_matrix(mtr, &result);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(inverse_matrix_isnot_correct_one) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(3, 4, &mtr);
  ck_assert_int_eq(stat, ok);
  stat = inverse_matrix(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(inverse_matrix_isnot_correct_two) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(12, 24, &mtr);
  ck_assert_int_eq(stat, ok);
  stat = inverse_matrix(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(inverse_matrix_isnot_correct_three) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(21, 12, &mtr);
  ck_assert_int_eq(stat, ok);
  stat = inverse_matrix(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(inverse_matrix_isnot_correct_four) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(42, 24, &mtr);
  ck_assert_int_eq(stat, ok);
  stat = inverse_matrix(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
}
END_TEST

START_TEST(inverse_matrix_isnot_correct_five) {
  matrix_t *mtr = NULL, *result = NULL;
  int stat = create_matrix(89, 98, &mtr);
  ck_assert_int_eq(stat, ok);
  stat = inverse_matrix(mtr, &result);
  ck_assert_int_eq(stat, ncm_error);
  if (mtr) remove_matrix(&mtr);
  if (result) remove_matrix(&result);
}
END_TEST

Suite *MatrixTest(void) {
  Suite *suite = suite_create("MatrixTest");
  TCase *tcase = tcase_create("MatrixTest");
  tcase_add_test(tcase, create_matrix_normal_one);
  tcase_add_test(tcase, create_matrix_normal_two);
  tcase_add_test(tcase, create_matrix_normal_three);
  tcase_add_test(tcase, create_matrix_normal_four);
  tcase_add_test(tcase, create_matrix_normal_five);
  tcase_add_test(tcase, create_matrix_isnot_null_one);
  tcase_add_test(tcase, create_matrix_isnot_null_two);
  tcase_add_test(tcase, create_matrix_isnot_null_three);
  tcase_add_test(tcase, create_matrix_isnull_size_one);
  tcase_add_test(tcase, create_matrix_isnull_size_two);
  tcase_add_test(tcase, create_matrix_isnull_size_three);
  tcase_add_test(tcase, create_matrix_isnull_size_four);
  tcase_add_test(tcase, create_matrix_isnull_size_five);
  tcase_add_test(tcase, create_matrix_isnegative_size_one);
  tcase_add_test(tcase, create_matrix_isnegative_size_two);
  tcase_add_test(tcase, create_matrix_isnegative_size_three);
  tcase_add_test(tcase, create_matrix_isnegative_size_four);
  tcase_add_test(tcase, create_matrix_isnegative_size_five);
  tcase_add_test(tcase, create_matrix_islarge_size_one);
  tcase_add_test(tcase, create_matrix_islarge_size_two);
  tcase_add_test(tcase, create_matrix_islarge_size_three);
  tcase_add_test(tcase, create_matrix_islarge_size_four);
  tcase_add_test(tcase, create_matrix_islarge_size_five);
  tcase_add_test(tcase, remove_matrix_normal_one);
  tcase_add_test(tcase, remove_matrix_normal_two);
  tcase_add_test(tcase, remove_matrix_normal_three);
  tcase_add_test(tcase, remove_matrix_normal_four);
  tcase_add_test(tcase, remove_matrix_normal_five);
  tcase_add_test(tcase, remove_matrix_isnot_one);
  tcase_add_test(tcase, remove_matrix_isnot_two);
  tcase_add_test(tcase, remove_matrix_isnot_three);
  tcase_add_test(tcase, remove_matrix_isnot_four);
  tcase_add_test(tcase, remove_matrix_isnot_five);
  tcase_add_test(tcase, eq_matrix_normal_one);
  tcase_add_test(tcase, eq_matrix_normal_two);
  tcase_add_test(tcase, eq_matrix_normal_three);
  tcase_add_test(tcase, eq_matrix_normal_four);
  tcase_add_test(tcase, eq_matrix_normal_five);
  tcase_add_test(tcase, eq_matrix_isnot_one);
  tcase_add_test(tcase, eq_matrix_isnot_two);
  tcase_add_test(tcase, eq_matrix_isnot_three);
  tcase_add_test(tcase, eq_matrix_isnot_four);
  tcase_add_test(tcase, eq_matrix_isnot_five);
  tcase_add_test(tcase, eq_matrix_isnot_matrix_one);
  tcase_add_test(tcase, eq_matrix_isnot_matrix_two);
  tcase_add_test(tcase, eq_matrix_isnot_matrix_three);
  tcase_add_test(tcase, sum_matrix_normal_one);
  tcase_add_test(tcase, sum_matrix_normal_two);
  tcase_add_test(tcase, sum_matrix_normal_three);
  tcase_add_test(tcase, sum_matrix_normal_four);
  tcase_add_test(tcase, sum_matrix_normal_five);
  tcase_add_test(tcase, sum_matrix_isnot_correct_one);
  tcase_add_test(tcase, sum_matrix_isnot_correct_two);
  tcase_add_test(tcase, sum_matrix_isnot_correct_three);
  tcase_add_test(tcase, sum_matrix_isnot_correct_four);
  tcase_add_test(tcase, sum_matrix_isnot_correct_five);
  tcase_add_test(tcase, sum_matrix_isnot_matrix_one);
  tcase_add_test(tcase, sum_matrix_isnot_matrix_two);
  tcase_add_test(tcase, sum_matrix_isnot_matrix_three);
  tcase_add_test(tcase, sum_matrix_isnot_matrix_four);
  tcase_add_test(tcase, sum_matrix_isnot_matrix_five);
  tcase_add_test(tcase, sub_matrix_normal_one);
  tcase_add_test(tcase, sub_matrix_normal_two);
  tcase_add_test(tcase, sub_matrix_normal_three);
  tcase_add_test(tcase, sub_matrix_normal_four);
  tcase_add_test(tcase, sub_matrix_normal_five);
  tcase_add_test(tcase, sub_matrix_isnot_correct_one);
  tcase_add_test(tcase, sub_matrix_isnot_correct_two);
  tcase_add_test(tcase, sub_matrix_isnot_correct_three);
  tcase_add_test(tcase, sub_matrix_isnot_correct_four);
  tcase_add_test(tcase, sub_matrix_isnot_correct_five);
  tcase_add_test(tcase, sub_matrix_isnot_matrix_one);
  tcase_add_test(tcase, sub_matrix_isnot_matrix_two);
  tcase_add_test(tcase, sub_matrix_isnot_matrix_three);
  tcase_add_test(tcase, sub_matrix_isnot_matrix_four);
  tcase_add_test(tcase, sub_matrix_isnot_matrix_five);
  tcase_add_test(tcase, mult_number_is_normal_one);
  tcase_add_test(tcase, mult_number_is_normal_two);
  tcase_add_test(tcase, mult_number_is_normal_three);
  tcase_add_test(tcase, mult_number_is_normal_four);
  tcase_add_test(tcase, mult_number_is_normal_five);
  tcase_add_test(tcase, mult_number_is_normal_six);
  tcase_add_test(tcase, mult_number_is_normal_seven);
  tcase_add_test(tcase, mult_number_is_normal_eight);
  tcase_add_test(tcase, mult_number_isnot_matrix_one);
  tcase_add_test(tcase, mult_number_isnot_matrix_two);
  tcase_add_test(tcase, mult_number_isnot_matrix_three);
  tcase_add_test(tcase, mult_matrix_normal_one);
  tcase_add_test(tcase, mult_matrix_normal_two);
  tcase_add_test(tcase, mult_matrix_normal_three);
  tcase_add_test(tcase, mult_matrix_normal_four);
  tcase_add_test(tcase, mult_matrix_normal_five);
  tcase_add_test(tcase, mult_matrix_isnot_correct_size_one);
  tcase_add_test(tcase, mult_matrix_isnot_correct_size_two);
  tcase_add_test(tcase, mult_matrix_isnot_correct_size_three);
  tcase_add_test(tcase, mult_matrix_isnot_correct_size_four);
  tcase_add_test(tcase, mult_matrix_isnot_correct_size_five);
  tcase_add_test(tcase, mult_matrix_isnot_matrix_one);
  tcase_add_test(tcase, mult_matrix_isnot_matrix_two);
  tcase_add_test(tcase, mult_matrix_isnot_matrix_three);
  tcase_add_test(tcase, transpose_normal_one);
  tcase_add_test(tcase, transpose_normal_two);
  tcase_add_test(tcase, transpose_normal_three);
  tcase_add_test(tcase, transpose_normal_four);
  tcase_add_test(tcase, transpose_normal_five);
  tcase_add_test(tcase, transpose_isnot_matrix_one);
  tcase_add_test(tcase, transpose_isnot_matrix_two);
  tcase_add_test(tcase, transpose_isnot_matrix_three);
  tcase_add_test(tcase, calc_complements_normal_one);
  tcase_add_test(tcase, calc_complements_normal_two);
  tcase_add_test(tcase, calc_complements_normal_three);
  tcase_add_test(tcase, calc_complements_normal_four);
  tcase_add_test(tcase, calc_complements_normal_five);
  tcase_add_test(tcase, calc_complements_isnot_correct_one);
  tcase_add_test(tcase, calc_complements_isnot_correct_two);
  tcase_add_test(tcase, calc_complements_isnot_correct_three);
  tcase_add_test(tcase, calc_complements_isnot_correct_four);
  tcase_add_test(tcase, calc_complements_isnot_correct_five);
  tcase_add_test(tcase, calc_complements_isnot_matrix_one);
  tcase_add_test(tcase, calc_complements_isnot_matrix_two);
  tcase_add_test(tcase, calc_complements_isnot_matrix_three);
  tcase_add_test(tcase, calc_complements_isnot_correct_m_one);
  tcase_add_test(tcase, calc_complements_isnot_correct_m_two);
  tcase_add_test(tcase, calc_complements_isnot_correct_m_three);
  tcase_add_test(tcase, determinant_normal_one);
  tcase_add_test(tcase, determinant_normal_two);
  tcase_add_test(tcase, determinant_normal_three);
  tcase_add_test(tcase, determinant_normal_four);
  tcase_add_test(tcase, determinant_normal_five);
  tcase_add_test(tcase, determinant_isnot_matrix);
  tcase_add_test(tcase, determinant_isnot_correct_matrix_one);
  tcase_add_test(tcase, determinant_isnot_correct_matrix_two);
  tcase_add_test(tcase, determinant_isnot_correct_matrix_three);
  tcase_add_test(tcase, determinant_isnot_correct_matrix_four);
  tcase_add_test(tcase, determinant_isnot_correct_matrix_five);
  tcase_add_test(tcase, inverse_matrix_normal_one);
  tcase_add_test(tcase, inverse_matrix_normal_two);
  tcase_add_test(tcase, inverse_matrix_normal_three);
  tcase_add_test(tcase, inverse_matrix_normal_four);
  tcase_add_test(tcase, inverse_matrix_normal_five);
  tcase_add_test(tcase, inverse_matrix_isnot_matrix_one);
  tcase_add_test(tcase, inverse_matrix_isnot_matrix_two);
  tcase_add_test(tcase, inverse_matrix_isnot_matrix_three);
  tcase_add_test(tcase, inverse_matrix_isnot_correct_one);
  tcase_add_test(tcase, inverse_matrix_isnot_correct_two);
  tcase_add_test(tcase, inverse_matrix_isnot_correct_three);
  tcase_add_test(tcase, inverse_matrix_isnot_correct_four);
  tcase_add_test(tcase, inverse_matrix_isnot_correct_five);
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