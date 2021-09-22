#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];  // Adjacency List
signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  // Input Graph in Adjacency list
  // BFS
  // Minimum distance from vertex 1 to all other vertices in non-weighted graph
  queue<int> q;
  q.push(1);
  vector<int> dis(N, INT_MAX);
  dis[1] = 0;
  while (!q.empty()) {
    int x = q.front();
    q.pop();
    for (int y : adj[x]) {
      if (dis[x] + 1 < dis[y]) {
        dis[y] = dis[x] + 1;
        q.push(y);
      }
    }
  }
  return 0;
}
