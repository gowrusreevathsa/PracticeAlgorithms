#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	getline(cin, s);
	
	string temp = "";
	int res = 0;
	
	for(char c: s){
		if(isdigit(c)){
			temp += c;
		}
		else{
			res += atoi(temp.c_str());
			temp ="";
		}
	}
	
	res += atoi(temp.c_str());
	
	cout << res;

	return 0;
}

