/* void *s21_memcpy(void *dest, const void *src, s21_size_t n); // Выполняет
поиск первого вхождения символа c (беззнаковый тип) в первых n байтах строки, на
которую указывает аргумент str. void *s21_memmove(void *dest, const void *src,
s21_size_t n); void *s21_memset(void *str, int c, s21_size_t n); char
*s21_strcpy(char *dest, const char *src); char *s21_strncpy(char *dest, const
char *src, s21_size_t n);
*/

#include <stdlib.h>

#include "s21_string.h"

void* s21_memcpy(void* dest, const void* src, s21_size_t n) {
  char* dest_char = (char*)dest;
  const char* src_char = (const char*)src;
  for (s21_size_t i = 0; i < n; ++i) {
    *(dest_char + i) = *(src_char + i);
  }
  return dest;
}

void* s21_memmove(void* dest, const void* src, s21_size_t n) {
  char* dest_char = (char*)dest;
  const char* src_char = (const char*)src;
  if (dest_char <= src_char) {
    for (s21_size_t i = 0; i < n; ++i) {
      *(dest_char + i) = *(src_char + i);
    }
  } else {
    for (s21_size_t i = n; i > 0; --i) {
      *(dest_char + i - 1) = *(src_char + i - 1);
    }
  }
  return dest;
}

void* s21_memset(void* str, int c, s21_size_t n) {
  char* str_char = (char*)str;
  for (s21_size_t i = 0; i < n; ++i) *(str_char + i) = c;
  return str;
}

char* s21_strcpy(char* dest, const char* src) {
  char* result = dest;
  while (*src != '\0') {
    *dest++ = *src++;
  }
  *dest = '\0';
  return result;
}

char* s21_strncpy(char* dest, const char* src, s21_size_t n) {
  char* result = dest;
  while (n > 0 && *src != '\0') {
    *dest++ = *src++;
    --n;
  }
  while (n > 0) {
    *dest++ = '\0';
    --n;
  }
  return result;
}
