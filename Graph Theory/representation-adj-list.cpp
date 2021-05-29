// we use this most time
// has time complexity n + 2E + 2X
// can be used for weighted & bounded graphs

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	// declare the adj vector of pair
	vector <pair<int, int>> adj[n+1];

	// take input of edges with wt included
	for(int i = 0; i < m; i++) {
		int u, v, wt;
		cin >> u >> v >> wt;
		adj[u].push_back({v, wt});
		adj[v].push_back({u, wt});
	}

	return 0;
}