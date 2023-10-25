#include "s21_string.h"

char* s21_strchr(const char* s, int c) {
  char* res = s21_NULL;
  do {
    if (*s == c) {
      res = (char*)s;
      break;
    }
  } while (*s++);

  return res;
}

char* s21_strstr(const char* haystack, const char* needle) {
  const char *a, *b;
  char* res = s21_NULL;
  b = needle;
  if (*b == 0) {
    res = (char*)haystack;
  } else {
    int f = 1;
    for (; *haystack != 0 && f; haystack += 1) {
      if (*haystack != *b) {
        continue;
      }
      a = haystack;
      while (1) {
        if (*b == 0) {
          res = (char*)haystack;
          f = 0;
          break;
        }
        if (*a++ != *b++) {
          break;
        }
      }
      if (f) b = needle;
    }
  }
  return res;
}

void* s21_memchr(const void* str, int c, s21_size_t n) {
  const char* str_char = (const char*)str;
  void* res = s21_NULL;
  for (s21_size_t i = 0; i < n; i++) {
    if (*(str_char + i) == (char)c) {
      res = (void*)(str_char + i);
      break;
    }
  }
  return res;
}

char* s21_strpbrk(const char* str1, const char* str2) {
  int i, j;
  char* res = s21_NULL;
  int f = 1;
  for (i = 0; f && str1[i] != '\0'; i++) {
    for (j = 0; str2[j] != '\0'; j++) {
      if (str1[i] == str2[j]) {
        res = (char*)(str1 + i);
        f = 0;
        break;
      }
    }
  }
  return res;
}

char* s21_strrchr(const char* str, int c) {
  const char* res = s21_NULL;
  if (str != s21_NULL) {
    do {
      if (*str == (char)c) {
        res = str;
      }
    } while (*str++);
  }
  return (char*)res;
}
