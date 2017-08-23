#pragma once

#include <stdio.h>

static inline void print_arr(char *prefix, size_t n, int a[n])
{
  if (prefix) {
    printf("%s: ", prefix);
  }
  for(size_t i = 0; i < n; ++i) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

