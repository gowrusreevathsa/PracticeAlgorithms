#include<bits/stdc++.h>

using namespace std;

void swapMin(int min_ind, int i, int arr[]){
	int temp = arr[min_ind];
	arr[min_ind] = arr[i];
	arr[i] = temp;
}

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
	
	int min, min_ind;
	for(int i = 1; i<n; ++i){
		min = INT_MAX;
		for(int j = i-1; j<n; ++j){
			if(min > arr[j]){
				min = arr[j];
				min_ind = j;
			}
		}
		
		swapMin(min_ind, i-1, arr);
	}

	printArr(arr, n);

	return 0;
}

