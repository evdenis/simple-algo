#include "bubble.h"
#include "swap.h"

void bubble_sort(size_t n, int a[n])
{
  for(size_t i = 0; i < n; ++i)
    for(size_t j = n - 1; j > 0; --j)
      if (a[j] < a[j - 1])
        swap(a, j - 1, j);
}


