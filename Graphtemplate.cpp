vector<vector<int>> readGraph(int N, int M) {
	vector<vector<int>> g(N);
    for(int i = 0 ; i< M ; i++) {
    	int u, v;
	    cin >> u >> v;
    	--u, --v;
    	g[u].push_back(v);
    	g[v].push_back(u);
    }
    return g;
}
vector<vector<vector<int>>> readGraphWithWeight(int N, int M) {
	vector<vector<vector<int>>> g(N);
    for(int i = 0 ; i< M ; i++) {
    	int u, v, w;
	    cin >> u >> v >> w;
    	--u, --v;
    	g[u].push_back({v, w});
    	g[v].push_back({u, w});
    }
    return g;
}
