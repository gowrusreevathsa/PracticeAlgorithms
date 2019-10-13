/*
* Sreevathsa Gowru
* @gowrusreevathsa
*/

#include<bits/stdc++.h>

using namespace std;

void addEdge(int s, int d, vector<int> g[]){
	g[s].push_back(d);
}

void DFSUtil(int s, vector<int> g[], bool v[]){
	
	v[s] = true;
	
	//Recurrent calls
	for(auto i = g[s].begin(); i != g[s].end(); ++i){
		if(!v[*i]){
			DFSUtil(*i, g, v);
		}
	}
	
}

int findMotherVertex(int n, vector<int> g[]){
	
	bool visited[n];
	for(int i = 0; i<n; ++i)
		visited[i] = false;
	
	int lastVertex = 0;
	for(int i = 0; i<n; ++i){
		if(!visited[i]){
			DFSUtil(i, g, visited);
			lastVertex = i;
		}
	}
		

	for(int i = 0; i<n; ++i)
		visited[i] = false;
		
	DFSUtil(lastVertex, g, visited);
	
	for(auto e: visited)
		if(!e)
			return -1;
			
	return lastVertex;
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
	
	cout << findMotherVertex(n, g);
	
	return 0;
}
