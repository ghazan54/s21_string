#include "s21_string.h"

char* s21_strcat(char* dest, const char* src) {
  char* save = dest;

  for (; *dest; ++dest) continue;

  while ((*dest++ = *src++) != '\0') continue;

  *dest = '\0';
  return save;
}

int is_delim(char c, const char* delim) {
  int res = 0;
  while (*delim != '\0')
    if (c == *delim++) {
      res = 1;
      break;
    }

  return res;
}

char* s21_strtok(char* str, const char* delim) {
  static char* result = s21_NULL;
  if (str) {
    result = str;
    while (*result && s21_strchr(delim, *result)) *result++ = '\0';
  }
  if (result != s21_NULL) {
    if (*result != '\0') {
      str = result;
      while (*result && !s21_strchr(delim, *result)) ++result;
      while (*result && s21_strchr(delim, *result)) *result++ = '\0';
    } else {
      str = s21_NULL;
      result = s21_NULL;
    }
  } else {
    str = s21_NULL;
    result = s21_NULL;
  }
  return str;
}

char* s21_strerror(int errnum) {
  char* ERRORS[] = ERR_LIST;
  char* error = s21_NULL;
  static char buf[100];
  if (errnum >= 0 && errnum < N) {
    error = ERRORS[errnum];
  } else {
    if (std == 0) {
      char* undef = "Unknown error ";
      s21_sprintf(buf, "%s%d", undef, errnum);
    } else if (std == 1) {
      char* undef = "Unknown error: ";
      s21_sprintf(buf, "%s%d", undef, errnum);
    }
  }
  return error == s21_NULL ? buf : error;
}

char* s21_strncat(char* dest, const char* src, s21_size_t n) {
  s21_size_t dest_len = s21_strlen(dest);
  s21_size_t i;
  for (i = 0; i < n && src[i] != '\0'; i++) dest[dest_len + i] = src[i];
  dest[dest_len + i] = '\0';
  return dest;
}
