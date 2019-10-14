#include <bits/stdc++.h>

using namespace std;

void rev_stack(stack<int>& s){
	int temp;
	
	if(!s.empty()){
		temp = s.top();
		s.pop();
		rev_stack(s);
		s.push(temp);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;	//no. of stack elements
	
	stack<int> s;
	
	int t;
	for(int i = 0; i<n; ++i){
		cin >> t;
		s.push(t);
	}
	
	rev_stack(s);
	
	//printing stack
	cout << "\n\n";
	while(!s.empty()){
		cout << s.top() << "\n";
		s.pop();
	}
	
	return 0;
}

