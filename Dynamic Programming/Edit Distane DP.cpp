#include<bits/stdc++.h>

using namespace std;

int editDis(string& s1, string& s2, int m, int n){
	
	int arr[m+1][n+1];
	
	for(int i = 0; i<=m; ++i){
		arr[i][0] = i;	//second string is empty - all deletions
	}
	
	for(int j = 0; j<=n; ++j){
		arr[0][j] = j;	//first string is empty - all insertions
	}
	
	for(int i = 1; i<=m; ++i){
		for(int j = 1; j<=n; ++j){
			
			if(s1[i-1] == s2[j-1])
				arr[i][j] = arr[i-1][j-1];
			else{
				arr[i][j] = 1 + min(arr[i-1][j-1],				//replace
									min(arr[i-1][j],			//remove
											arr[i][j-1]));		//insert
			}
			
		}
	}
	
	return arr[m][n];
}

int main(){
	
	string s1, s2;
	
	getline(cin, s1);
	getline(cin, s2);
	
	//convert s1 to s2
	
	cout << editDis(s1, s2, s1.length(), s2.length());

	return 0;
}

