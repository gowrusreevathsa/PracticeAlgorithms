#include<bits/stdc++.h>

using namespace std;

int main(){

	string s1, s2;		//s1 = text, s2 = pattern
	getline(cin, s1);
	getline(cin, s2);
	
	int l1 = s1.length();
	int l2 = s2.length();
	
	int diff = abs(l1 - l2);
	for(int i = 0; i <= diff; ++i){
		
		int j;
		for(j = 0; j<l2; ++j){
			if(s1[i+j] != s2[j]){
				break;
			}
		}
		
		if(j == l2){
			cout << "Pattern found at index: " + i + "\n";
		}
	}

	return 0;
}

