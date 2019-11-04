/*
Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in 
the original array except the one at i
*/

#include<iostream>
#include<algorithm>
#define EPS 1e-9

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int arr[n];
	
	for(int i = 0; i<n; ++i){
		cin >> arr[i];
	}
	
	//using log property
	// s = a*b*c
	// log(s) = log(a) + log(b) + log(c)
	// s = antilog( log(a) + log(b) + log(c) )
	
	long double sum = 0;
	
	for(auto e: arr){
		sum += log10(e);
	}
	
	for(int i = 0; i<n; ++i){
		cout << (int)(EPS + pow((long double)10, sum - log10(arr[i]))) << " ";
	}
	
	return 0;
}
