#include "insertion.h"

void insertion_sort(size_t n, int a[n])
{
  for(size_t i = 1; i < n; ++i) {
    int el = a[i];
    size_t j = i;
    while (a[j - 1] > el && j > 0) {
      a[j] = a[j - 1];
      --j;
    }
    a[j] = el;
  }
}


