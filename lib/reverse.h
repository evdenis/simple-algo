#pragma once

#include "swap.h"

static inline void reverse(size_t n, int a[n])
{
  size_t m = n / 2;
  for(size_t i = 0; i < m; ++i) {
    swap(a, i, n - i - 1);
  }
}

