CC = gcc -std=c11
CFLAGS = -g -Wall -Wextra -Werror
CHECKFLAGS = -lcheck -lsubunit -lm -lrt -lpthread
GCOVFLAGS = -fprofile-arcs -ftest-coverage
MODULES_O = s21_calc.o s21_comparisions.o s21_copy.o s21_helping.o s21_search.o s21_spec.o s21_sio.o

MODULE_1_C = s21_calc.c
MODULE_2_C = s21_comparisions.c
MODULE_3_C = s21_copy.c
MODULE_4_C = s21_helping.c
MODULE_5_C = s21_search.c
MODULE_6_C = s21_spec.c
MODULE_7_C = s21_sio.c

MODULE_1_O = s21_calc.o
MODULE_2_O = s21_comparisions.o
MODULE_3_O = s21_copy.o
MODULE_4_O = s21_helping.o
MODULE_5_O = s21_search.o
MODULE_6_O = s21_spec.o
MODULE_7_O = s21_sio.o

MODULES_TEST = tests/test_insert.c tests/test_memchr.c tests/test_memcmp.c tests/test_memcpy.c tests/test_memmove.c tests/test_memset.c tests/test_sprintf_c.c tests/test_sprintf_d.c tests/test_sprintf_e.c tests/test_sprintf_f.c tests/test_sprintf_g.c tests/test_sprintf_hex1.c tests/test_sprintf_hex2.c tests/test_sprintf_i.c tests/test_sprintf_n.c tests/test_sprintf_octal.c tests/test_sprintf_percent.c tests/test_sprintf_pointer.c tests/test_sprintf_string.c tests/test_sprintf_unsigned.c tests/test_srtcpy.c tests/test_sscanf_c.c tests/test_sscanf_d.c tests/test_sscanf_empty.c tests/test_sscanf_i.c tests/test_sscanf_n.c tests/test_sscanf_o.c tests/test_sscanf_p.c tests/test_sscanf_real.c tests/test_sscanf_x.c tests/test_strcat.c tests/test_strchr.c tests/test_strcmp.c tests/test_strcspn.c tests/test_strerror.c tests/test_strlen.c tests/test_strncat.c tests/test_strncmp.c tests/test_strncpy.c tests/test_strpbrk.c tests/test_strrchr.c tests/test_strspn.c tests/test_strstr.c tests/test_strtok.c tests/test_to_lower.c tests/test_to_upper.c tests/test_trim.c tests/test_me.c

.PHONY: all clean

all: s21_string.a test test_run

s21_string.a: $(MODULES_O)
	ar rcs $@ $^

$(MODULE_1_O): $(MODULE_1_C)
	$(CC) -c $(CFLAGS) -o $@ $^

$(MODULE_2_O): $(MODULE_2_C)
	$(CC) -c $(CFLAGS) -o $@ $^

$(MODULE_3_O): $(MODULE_3_C)
	$(CC) -c $(CFLAGS) -o $@ $^

$(MODULE_4_O): $(MODULE_4_C)
	$(CC) -c $(CFLAGS) -o $@ $^

$(MODULE_5_O): $(MODULE_5_C)
	$(CC) -c $(CFLAGS) -o $@ $^

$(MODULE_6_O): $(MODULE_6_C)
	$(CC) -c $(CFLAGS) -o $@ $^

$(MODULE_7_O): $(MODULE_7_C)
	$(CC) -c $(CFLAGS) -o $@ $^

clean:
	rm -f *.out *.o *.a *.so *.gcno *.gcda *.html

.SILENT: s21_string_gcov.out gcov_report

gcov_report: clean s21_string_gcov.out
	./s21_string_gcov.out
	gcovr -r . --html -o s21_string.html

s21_string_gcov.out: $(MODULES_TEST) s21_string.a
	$(CC) $(CFLAGS) $(GCOVFLAGS) -o $@ $^ $(CHECKFLAGS)

test: s21_string_test.out

s21_string_test.out: $(MODULES_TEST) s21_string.a
	$(CC) $(CFLAGS) -o $@ $^ $(CHECKFLAGS)

test_run:
	./s21_string_test.out
