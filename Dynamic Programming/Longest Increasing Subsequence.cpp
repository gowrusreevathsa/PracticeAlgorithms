#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int arr[n];
	int lis[n];
	
	for(int i = 0; i<n; ++i){
		cin >> arr[i];
		lis[i] = 1;
	}
	
	
	for(int i = 1; i<n; ++i){
		for(int j = 0; j<i; ++j){
			if(arr[i] > arr[j] && (lis[i] <= lis[j])){
				lis[i] = lis[j] + 1;
			}
		}
	}
	
	cout << lis[n-1];
	return 0;
}

