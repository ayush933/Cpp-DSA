#include <bits/stdc++.h>
using namespace std;
const int N = 300;
int d[N][N];
int main() {
  for (int x = 1; x < N; x++) d[x][x] = 0;

  for (int k = 0; k < N; ++k) {
    for (int i = 0; i < N; ++i) {
      for (int j = 0; j < N; ++j) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
}