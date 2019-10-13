/*
* Sreevathsa Gowru
* @gowrusreevathsa
*/

#include<bits/stdc++.h>

using namespace std;

void addEdge(int s, int d, vector<int> g[]){
	g[s].push_back(d);
//	g[d].push_back(s);			//Use this if it's an undirected graph
}

void DFSUtil(int s, vector<int> g[], bool v[]){
	
	v[s] = true;
	cout << s << " ";
	
	//Recurrent calls
	for(auto i = g[s].begin(); i != g[s].end(); ++i){
		if(!v[*i]){
			DFSUtil(*i, g, v);
		}
	}
	
}

void DFS(int s, vector<int> g[]){
	bool visited[g->size()];
	for(int i = 0; i<g->size(); ++i)
		visited[i] = false;
		
	DFSUtil(s, g, visited);
}

int main(){
	
	int n;	//Number of nodes
	cin >> n;	
	
	vector<int> g[n];
	
	int e;	//Number of edges
	cin >> e; 	
	
	int s, d;	//source and destination of edges
	for(int i = 0; i<e; ++i){
		cin >> s >> d;
		addEdge(s, d, g);
	}
	
	int source;
	cin >> source;
	DFS(source, g);
	
	return 0;
}
