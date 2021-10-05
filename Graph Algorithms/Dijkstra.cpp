#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
const int N = 1e5 + 5;
vector<pii> adj[N];  /// Adjacency List to store the graph

int main() {
  vector<int> dis(N, 1e9 + 7);
  int s = 1;  // source vertex
  dis[s] = 0;
  priority_queue<pii, vector<pii>, greater<pii>> q;
  q.push({0, s});
  while (!q.empty()) {
    auto [v, d_v] = q.top();
    q.pop();
    if (d_v != dis[v]) continue;
    for (auto edge : adj[v]) {
      auto [to, len] = edge;
      if (dis[v] + len < dis[to]) {
        dis[to] = dis[v] + len;
        q.push({dis[to], to});
      }
    }
  }
}