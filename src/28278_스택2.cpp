#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <cctype>
#include <map>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	stack<int> st;
	int N; 
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a;
		switch (a) {
			case 1:
				cin >> b;
				st.push(b);
				break;
			case 2:
				if (st.empty()) {
					cout << -1 << '\n';
				}
				else {
					b = st.top();
					st.pop();
					cout << b << '\n';
				}
				break;
			case 3 :
				cout << st.size() << '\n' ;
				break;
			case 4 : 
				cout << st.empty() << '\n';
				break;
			case 5 : 
				if (!st.empty())
					cout << st.top() << '\n' ;
				else cout << -1 << '\n';
				break;
		}
	}
}

