#include <stdarg.h>
#include <stdio.h>

#include "s21_string.h"

int s21_sprintf(char* str, char const* format, ...) {
  int ret = 0;
  FILE* f = fopen("tmp.txt", "w");
  if (f && str) {
    va_list ap;
    va_start(ap, format);
    ret = vfprintf(f, format, ap);
    va_end(ap);
    fclose(f);
    f = fopen("tmp.txt", "r");
    while (f && !feof(f)) {
      int c = fgetc(f);
      if (c >= 0 && c <= 255) *str++ = c;
    }
    *str = 0;
    fclose(f);
    remove("tmp.txt");
  }
  return ret;
}

int s21_sscanf(const char* str, const char* format, ...) {
  int ret = 0;
  FILE* f = fopen("tmp.txt", "w");
  if (f) {
    va_list ap;
    va_start(ap, format);
    fprintf(f, "%s", str);
    fclose(f);
    f = fopen("tmp.txt", "r");
    if (f) {
      ret = vfscanf(f, format, ap);
      fclose(f);
      va_end(ap);
      remove("tmp.txt");
    }
  }
  return ret;
}
