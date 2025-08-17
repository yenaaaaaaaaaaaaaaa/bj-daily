#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	char res;
	int max;
	int cnt[26] = { 0 };
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		char c = toupper(s[i]);
		cnt[c - 'A'] += 1;
	}
	max = 0;
	
	for (int i = 0; i < 26; i++) {
		int a = cnt[i];
		if (a == max) {
			res = '?';
		}
		else if (a > max) {
			max = a;
			res = char(i + 'A');
		}
		
	}
	cout << res;
	return 0;
}

