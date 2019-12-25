#include<bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

int main(){
	
	int n;
	cin >> n;
	
	vector<pair<int, int>> p(n);	//pair<start, end>
	
	for(int i = 0; i<n; ++i){
		cin >> p[i].first >> p[i].second;
	}
	
	sort(p.begin(), p.end(), comp);
	
	int i = 0;
	cout << "Element " << i << " (" << p[i].first << ", " << p[i].second << ")\n";
	
	for(int j = 1; j<n; ++j){
		if(p[j].first >= p[i].second){
			cout << "Element " << j << " (" << p[j].first << ", " << p[j].second << ")\n";
			i = j;
		}
	}


	return 0;
}

