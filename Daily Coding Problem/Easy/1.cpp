/*
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17
*/

#include<iostream>
#include<set>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int arr[n];
	set<int> s;
	
	for(int i = 0; i<n; ++i){
		cin >> arr[i];
		s.insert(arr[i]);
	}
	
	int k;
	cin >> k;
	
	bool flag = false;
	
	for(auto e: arr){
		if(s.find(k - e) != s.end()){
			flag = true;
			break;
		}
	}
	
	if(flag) cout << "Found";
	else cout << "Not Found";
	
	return 0;
}
