#include <bits/stdc++.h>

using namespace std;

void sortUtil(int t, stack<int>& s){
	
	int temp;
	
	if(s.empty() || t>s.top()){
		s.push(t);
	}
	else{
		temp = s.top();
		s.pop();
		sortUtil(t, s);
		s.push(temp);
	}
	
}

void sort_stack(stack<int>& s){
	int temp;
	
	if(!s.empty()){
		temp = s.top();
		s.pop();
		sort_stack(s);
		sortUtil(temp, s);
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
	
	sort_stack(s);
	
	//printing stack
	cout << "\n\n";
	while(!s.empty()){
		cout << s.top() << "\n";
		s.pop();
	}
	
	return 0;
}

