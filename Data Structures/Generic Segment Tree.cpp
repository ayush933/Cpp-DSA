// Source:https://codeforces.com/blog/entry/18051
// Implementaion from USACO Guide.
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
template <class T>
struct Seg {
  const T ID = 0;  // comb(ID,b) = b
  int n;
  vector<T> seg;
  void init(int _n) {
    n = _n;
    seg.assign(2 * n, ID);
  }
  T comb(T a, T b) { return a + b; }
  T pull(int p) { seg[p] = comb(seg[2 * p], seg[2 * p + 1]); }
  void upd(int p, T val) {
    seg[p += n] = val;
    for (p /= 2; p; p /= 2) pull(p);
  }
  T query(int l, int r) {  // sum on interval [l, r]
    T ra = ID, rb = ID;
    for (l += n, r += n + 1; l < r; l /= 2, r /= 2) {
      if (l & 1) ra = comb(ra, seg[l++]);
      if (r & 1) rb = comb(seg[--r], rb);
    }
    return comb(ra, rb);
  }
};
int main() {
  int n = 1e5;
  Seg<int> st;
  return 0;
}
