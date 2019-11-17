#include<bits/stdc++.h>

using namespace std;

int count(int arr[], int len, int N){
	
	int dp[len][N+1];
	
	for(int i = 0; i<len; ++i){
		dp[i][0] = 1;
	}
	
	int a, b;
	for(int i = 1; i<=N; ++i){
		for(int j = 0; j<len; ++i){
			
			//including arr[j]
			if(i - arr[j] >= 0){
				a = dp[j][i - arr[j]];
			}
			else
				a = 0;
				
			//excluding arr[j]
			if(j > 0){
				b = dp[j-1][i];
			}
			else{
				b = 0;
			}
			
			dp[j][i] = a + b;
			
			cout << dp[j][i] << " ";
		}
		cout << "\n";
	}
	
	cout << dp[len-1][N];
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

