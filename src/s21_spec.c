#include <stdlib.h>

#include "s21_string.h"

void* s21_to_upper(const char* str) {
  char* res = NULL;
  if (str) {
    res = (char*)calloc((s21_strlen(str) + 1), sizeof(char));
    if (res != NULL) {
      s21_strcpy(res, str);
      for (char* tmp_str = res; *tmp_str; tmp_str++) {
        if (*tmp_str >= 'a' && *tmp_str <= 'z') {
          *tmp_str -= 32;
        }
      }
    }
  }
  return res;
}

void* s21_to_lower(const char* str) {
  char* res = NULL;
  if (str) {
    res = (char*)calloc((s21_strlen(str) + 1), sizeof(char));
    if (res) {
      s21_strcpy(res, str);
      for (char* tmp_str = res; *tmp_str; tmp_str++) {
        if (*tmp_str >= 'A' && *tmp_str <= 'Z') {
          *tmp_str += 32;
        }
      }
    }
  }
  return res;
}

void* s21_trim(const char* src, const char* trim_chars) {
  char* result = s21_NULL;
  if (src) result = (char*)calloc(s21_strlen(src) + 1, sizeof(char));
  if (!trim_chars && result)
    s21_memcpy(result, src, s21_strlen(src));
  else if (result) {
    s21_size_t result_pos = 0;
    for (s21_size_t i = 0; *(src + i); ++i) {
      if (!s21_strchr(trim_chars, *(src + i)))
        result[result_pos++] = *(src + i);
    }
  }
  return (void*)result;
}

void* s21_insert(const char* src, const char* str, s21_size_t start_index) {
  char* result = s21_NULL;
  if (src && str && start_index <= s21_strlen(src)) {
    s21_size_t src_len = s21_strlen(src);
    s21_size_t str_len = s21_strlen(str);
    result = (char*)calloc(src_len + str_len + 1, sizeof(char));
    if (result) {
      s21_strncpy(result, src, start_index);
      s21_strcpy(result + start_index, str);
      s21_strcpy(result + start_index + str_len, src + start_index);
    }
  }
  return result;
}
