#include<bits/stdc++.h>

using namespace std;

void computeLPS(string s2, int l2, int lps[]){
	
	int len = 0;
	
	lps[0] = 0;
	
	for(int i = 1; i<l2; ++i){
		if(s2[i] == s2[len]){
			++len;
			lps[i] = len;
			++i;
		}
		else{
			if(len != 0){
				len = lps[len-1]
			}
			else{
				lps[i] == 0;
				++i;
			}
		}
	}
	
}

void kmp(string s1, string s2, int l1, int l2, int lps[]){
	
	computeLPS(s2, l2, lps);
	
}

int main(){

	string s1, s2;		//s1 = text, s2 = pattern
	getline(cin, s1);
	getline(cin, s2);
	
	int l1 = s1.length();
	int l2 = s2.length();
	int lps[l2];
	
	kmp(s1, s2, lps);

	return 0;
}

