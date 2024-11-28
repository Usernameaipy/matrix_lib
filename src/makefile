CC = gcc
CFLAGS = -Wall -Wextra -Werror -I -std=c11 -pedantic
TESTFLAGS = -lcheck -lm -lpthread -lrt -lsubunit -g
BUILDDIR = ../build/

all : test

test : test/test.o math/calc_complements.o math/create_matrix.o math/determinant.o math/eq_matrix.o math/inverse_matrix.o math/mult_matrix.o math/mult_number.o math/remove_matrix.o math/sub_matrix.o math/sum_matrix.o math/transpose.o
	$(CC) $(CFLAGS) test/test.o math/*.o $(TESTFLAGS) -o $(BUILDDIR)test

test/test.o : test/test.c test/test.h
	$(CC) $(CFLAGS) -c test/test.c -o test/test.o

math/calc_complements.o : math/calc_complements.c math/matrix.h
	$(CC) $(CFLAGS) -c math/calc_complements.c -o math/calc_complements.o

math/create_matrix.o : math/create_matrix.c math/matrix.h
	$(CC) $(CFLAGS) -c math/create_matrix.c -o math/create_matrix.o

math/determinant.o : math/determinant.c math/matrix.h
	$(CC) $(CFLAGS) -c math/determinant.c -o math/determinant.o

math/eq_matrix.o : math/eq_matrix.c math/matrix.h
	$(CC) $(CFLAGS) -c math/eq_matrix.c -o math/eq_matrix.o

math/inverse_matrix.o : math/inverse_matrix.c math/matrix.h
	$(CC) $(CFLAGS) -c math/inverse_matrix.c -o math/inverse_matrix.o

math/mult_matrix.o : math/mult_matrix.c math/matrix.h
	$(CC) $(CFLAGS) -c math/mult_matrix.c -o math/mult_matrix.o

math/mult_number.o : math/mult_number.c math/matrix.h
	$(CC) $(CFLAGS) -c math/mult_number.c -o math/mult_number.o

math/remove_matrix.o : math/remove_matrix.c math/matrix.h
	$(CC) $(CFLAGS) -c math/remove_matrix.c -o math/remove_matrix.o

math/sub_matrix.o : math/sub_matrix.c math/matrix.h
	$(CC) $(CFLAGS) -c math/sub_matrix.c -o math/sub_matrix.o

math/sum_matrix.o : math/sum_matrix.c math/matrix.h
	$(CC) $(CFLAGS) -c math/sum_matrix.c -o math/sum_matrix.o

math/transpose.o : math/transpose.c math/matrix.h
	$(CC) $(CFLAGS) -c math/transpose.c -o math/transpose.o

clean_o : 
	rm -rf math/*.o
	rm -rf test/*.o
	rm -rf enought_func/*.o

clean : clean_o
	rm -rf $(BUILDDIR)*

rebuild : clean all

style_check :
	find . -name "*.c" -o -name "*.h" | xargs clang-format -n --style=Google

style :
	find . -name "*.c" -o -name "*.h" | xargs clang-format -i --style=Google

valgrind : clean
	make test && CK_FORK=no valgrind --vgdb=no --leak-check=full --show-reachable=yes --show-leak-kinds=all --track-origins=yes --verbose --read-var-info=yes ./$(BUILDDIR)test