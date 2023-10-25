#include "s21_string.h"

int s21_strcmp(const char* str1, const char* str2) {
  const char* s1 = (const char*)str1;
  const char* s2 = (const char*)str2;
  char c1 = 1, c2 = 0;
  if (s1 && s2) {
    do {
      c1 = (char)*s1++;
      c2 = (char)*s2++;
      if (c1 == '\0') break;
    } while (c1 == c2);
  }
  return c1 - c2;
}

int s21_memcmp(const void* str1, const void* str2, s21_size_t n) {
  const unsigned char* s1 = (const unsigned char*)str1;
  const unsigned char* s2 = (const unsigned char*)str2;
  s21_size_t i = 0;
  int res = 0;
  int difference;
  for (; i < n; i++) {
    difference = s1[i] - s2[i];
    if (difference != 0) {
      res = difference;
      break;
    }
  }

  return res;
}

int s21_strncmp(const char* str1, const char* str2, s21_size_t n) {
  int flag = 0;
  while (n--) {
    if (*str1 != *str2) {
      flag = *str1 - *str2;
    } else {
      ++str1;
      ++str2;
    }
  }
  return flag;
}
