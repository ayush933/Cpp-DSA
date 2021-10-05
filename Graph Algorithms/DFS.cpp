#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;  // Max number of nodes
vector<int> adj[N];     // Adjaceny List to store the graph
bool visited[N];
void dfs(int x) {
  visited[x] = 1;
  for (int y : adj[x]) {
    if (!visited[y]) dfs(y);
  }
}
int main() {
  // Input Graph
  dfs(1);
  return 0;
}
