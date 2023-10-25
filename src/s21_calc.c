/*
s21_size_t s21_strlen(const char *str); // Вычисляет длину строки str, не
включая завершающий нулевой символ. s21_size_t s21_strcspn(const char *str1,
const char *str2); // Вычисляет длину начального сегмента str1, который
полностью состоит из символов, не входящих в str2. s21_size_t s21_strspn(const
char *str1, const char *str2); // Вычисляет длину начального сегмента str1,
который полностью состоит из символов, не входящих в str2.
*/
#include "s21_string.h"

s21_size_t s21_strlen(const char *str) {
  s21_size_t n = 0;
  while (*(str + n) != '\0') {
    ++n;
  }
  return n;
}

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  s21_size_t len = 0;
  while (str1[len] && !s21_strchr(str2, str1[len])) len++;
  return len;
}

s21_size_t s21_strspn(const char *str1, const char *str2) {
  s21_size_t len = 0;
  while (str1[len] && s21_strchr(str2, str1[len])) len++;
  return len;
}
