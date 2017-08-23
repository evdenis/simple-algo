#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include "lib.h"

static inline void test(char *name, size_t n, int a[n],
                        void (*sort)(size_t n, int a[n]))
{
  sort(n, a);
  print_arr(name, n, a);
  reverse(n, a);
}

int main(int argc, char *argv[])
{
  #define ASIZE 11
  int a[ASIZE] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1};

  print_arr(NULL, ASIZE, a);

  test("selection", ASIZE, a, selection_sort);
  test("insertion", ASIZE, a, insertion_sort);
  test("bubble", ASIZE, a, bubble_sort);
  test("merge", ASIZE, a, merge_sort);
  test("quick", ASIZE, a, quick_sort);

  return 0;
}
