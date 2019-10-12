/*
* Sreevathsa Gowru
* @gowrusreevathsa
*/

//Adjacency representation of a graph

#include<bits/stdc++.h>

using namespace std;

void addEdge(int s, int d, vector<int> g[]){
	g[s].push_back(d);
	g[d].push_back(s);	//Don't use this if it's a directed graph
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
	
	//printing
	for(int i = 0; i<n; ++i){
		cout << i;
		for(auto e: g[i]){
			cout << " - " << e;
		}
		cout << "\n";
	}
	
	return 0;
}
