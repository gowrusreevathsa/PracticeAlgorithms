#include<bits/stdc++.h>

using namespace std;

int editDis(string& s1, string& s2, int m, int n){
	
	if(m == 0)
		return n;	//insertions
	if(n == 0)
		return m;	//deletions
		
	if(s1[m-1] == s2[n-1])
		return editDis(s1, s2, m-1, n-1);
		
	return 1 + min(editDis(s1, s2, m-1, n-1), 			//replace
					min(editDis(s1, s2, m, n-1), 		//insert
							editDis(s1, s2, m-1, n)));	//remove
	
}

int main(){
	
	string s1, s2;
	
	getline(cin, s1);
	getline(cin, s2);
	
	//convert string s1 to s2
	
	cout << editDis(s1, s2, s1.length(), s2.length());

	return 0;
}

