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
		int a;
		cin >> a;
		if (a != 0) {
			st.push(a);
		}
		else st.pop();
	}
	int res = 0;
	for (int i = st.size(); i > 0; i--) {
		res += st.top();
		st.pop();
	}
	cout << res;
}

