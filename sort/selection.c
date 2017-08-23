#include "selection.h"
#include "swap.h"
#include "min_max.h"

void selection_sort(size_t n, int a[n])
{
   for(size_t i = 0; i < n; ++i) {
      swap(a, i + min_ind(n - i, a + i), i);
   }
}

