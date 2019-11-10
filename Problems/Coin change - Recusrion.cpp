#include<bits/stdc++.h>

using namespace std;

int count(int arr[], int len, int N){
	
	if(N==0)
		return 1;	//1 solution, don't include any coin
		
	if(N < 0)
		return 0;
		
	if(len <= 0 && N > 0){
		return 0;
	}
	
	return count(arr, len - 1, N) + count(arr, len, N - arr[len - 1]);	//excluding and including a coin
}

int main(){

	int num_coins, N;
	cin >> num_coins;
	
	int arr[num_coins];
	for(int i = 0; i<num_coins; ++i){
		cin >> arr[i];
	}
	
	cin >> N;
	
	cout << count(arr, num_coins, N);

	return 0;
}

