#pragma once

static inline void copy(size_t fl, size_t fr, const int f[fr],
                        size_t tl, size_t tr, int t[tr])
{
  for(; fl < fr && tl < tr; ++tl, ++fl) {
    t[tl] = f[fl];
  }
}

