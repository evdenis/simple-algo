#include "quick.h"
#include "swap.h"

void quick_helper(size_t l, size_t r, int a[r])
{
   if (r > l) {
      int pivot = a[l];
      size_t il = l + 1;
      size_t ir = r;
      while(il < ir) {
         if (a[il] <= pivot) {
            il += 1;
         } else if (a[ir] > pivot)  {
            ir -= 1;
         } else if (il < ir) {
            swap(a, il, ir);
         }
      }
      il -= 1;
      swap(a, l, il);
      quick_helper(l, il, a);
      quick_helper(ir, r, a);
   }
}

void quick_sort(size_t n, int a[n])
{
   quick_helper(0, n, a);
}

