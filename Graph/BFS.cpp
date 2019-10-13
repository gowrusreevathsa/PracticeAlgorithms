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

void BFS(int s, int n, vector<int> g[]){
	bool visited[n];
	for(int i = 0; i<n; ++i)
		visited[i] = false;
		
	list<int> queue;
	
	//source node
	visited[s] = true;
	queue.push_back(s);
	
	while(!queue.empty()){
		s = queue.front();
		cout << s << " ";
		queue.pop_front();
		
		for(auto i = g[s].begin(); i != g[s].end(); ++i){
			if(!visited[*i]){
				visited[*i] = true;
				queue.push_back(*i);
			}
		}	
	}
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
	BFS(source, n, g);
	
	return 0;
}
