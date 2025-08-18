#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{
	int N, cnt = 0; cin >> N;
	char t;
	
	
	for (int i = 0; i < N;i++) {
		bool g = true;
		vector<int> arr(26, 0);
		string s; cin >> s;
		t = s[0];
		arr[t - 'a'] += 1;

		for (int j = 1; j < s.size();) {
			if ((s[j] != t) && (arr[s[j] - 'a'] != 0)) {
				g = false;
				break;
			}
				t = s[j];
				arr[t - 'a'] += 1;
				j++;
			
		}
		if (g == true) { cnt++; }
	}
	cout << cnt;
}

