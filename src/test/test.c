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