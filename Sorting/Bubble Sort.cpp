#include<bits/stdc++.h>

using namespace std;

void printArr(int arr[], int n){
	for(int i = 0; i<n; ++i){
		cout << arr[i] << " ";
	}
}

int main(){

	int n;
	cin >> n;
	
	int arr[n];
	for(int i = 0; i<n; ++i){
		cin >> arr[i];
	}
	
	int temp;
	for(int i = 1; i<n; ++i){
		for(int j = 0; j<n-i; ++j){
			if(arr[j] > arr[j+1]){
				//swap
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printArr(arr, n);	

	return 0;
}

