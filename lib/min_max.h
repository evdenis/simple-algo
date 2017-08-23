#pragma once

#include <stddef.h>

static inline size_t min_ind(size_t n, int a[n])
{
   size_t min = 0;
   for(size_t i = 1; i < n; ++i) {
      if (a[min] > a[i]) {
         min = i;
      }
   }
   return min;
}

