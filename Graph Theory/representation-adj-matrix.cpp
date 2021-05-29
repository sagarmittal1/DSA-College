// has complexity nxn so we don't use it
// it the input is small then useful

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	// declare the adjacnet matrix
	int adj[n+1][n+1];

	// take edge as input
	for(int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adj[u][v] = 1;
		adj[v][u] = 1;
	}

	return 0;
}