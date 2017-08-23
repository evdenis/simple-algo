#pragma once

/*@ requires \valid(a+i);
    requires \valid(a+j);
    assigns a[i], a[j];
    ensures a[i] == \old(a[j]);
    ensures a[j] == \old(a[i]);
 */
static inline void swap(int a[], size_t i, size_t j)
{
  int tmp = a[i];
  a[i] = a[j];
  a[j] = tmp;
}
