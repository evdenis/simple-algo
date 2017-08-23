#include "merge.h"
#include "copy.h"

static inline void
merge(size_t l, size_t r, size_t m, int a[r])
{
   size_t il = l;
   size_t ir = m;
   size_t i = 0;
   size_t n = r - l;
   int tmp[n];

   while (il < m && ir < r && il < ir && i < n) {
      if (a[il] < a[ir]) {
         tmp[i] = a[il++];
      } else {
         tmp[i] = a[ir++];
      }
      ++i;
   }

   if (il < m) {
      copy(il, m, a,
           i,  n, tmp);
   } else if (ir < r) {
      copy(ir, r, a,
           i,  n, tmp);
   }
   copy(0, n, tmp,
        l, r, a);
}

static inline void
merge_helper(size_t l, size_t r, int a[r])
{
   size_t m = l + (r - l) / 2;
   if (l > r || l == m || r == m)
      return;

   merge_helper(l, m, a);
   merge_helper(m, r, a);

   merge(l, r, m, a);
}

void merge_sort(size_t n, int a[n])
{
   merge_helper(0, n, a);
}
