const int N = 1007;

vector<int> graph[N];
vector<bool> visited(N, 0);


void bfs(int val){
	
	if(visited[val])return;
	visited[val] = true;
	
	for(auto ele: graph[val]){
		if(visited[ele] == 0){
			bfs(ele);
		}
	}
}

