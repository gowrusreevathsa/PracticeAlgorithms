#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	
	cout << s1.length() << " " << s2.length() << "\n";
	int arr[s1.length() + 1][s2.length() + 1];
	
	for(int i = 0; i<=s1.length(); ++i)
		arr[i][0] = 0;
		
	for(int i = 0; i<=s2.length(); ++i)
		arr[0][i] = 0;		
	

	for(int i = 1; i<=s1.length(); ++i){
		for(int j = 1; j <= s2.length(); ++j){
			if(s1[i] == s2[j]){
				arr[i][j] = arr[i-1][j-1] + 1;
			}
			else{
				arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
			}
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	
	cout << "Length of LCS is " << arr[s1.length()][s2.length()];
	
	return 0;
}

