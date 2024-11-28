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

Suite *MatrixTest(void) {
  Suite *suite = suite_create("MatrixTest");
  TCase *tcase = tcase_create("MatrixTest");

  tcase_add_test(tcase, create_matrix_normal_one);
  tcase_add_test(tcase, create_matrix_normal_two);
  tcase_add_test(tcase, create_matrix_normal_three);
  tcase_add_test(tcase, create_matrix_normal_four);
  tcase_add_test(tcase, create_matrix_normal_five);

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