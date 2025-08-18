#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	cin >> s;
	int cnt = 0;
	string t = "";
	for (int i = 0; i < s.size();) {
		if (i + 2 < s.size() && s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=') {
				cnt++;
				i += 3;
		}
		else if (i + 1 < s.size() &&
			((s[i] == 'c' && s[i + 1] == '=') ||
				(s[i] == 'c' && s[i + 1] == '-') ||
				(s[i] == 'd' && s[i + 1] == '-') ||
				(s[i] == 'l' && s[i + 1] == 'j') ||
				(s[i] == 'n' && s[i + 1] == 'j') ||
				(s[i] == 's' && s[i + 1] == '=') ||
				(s[i] == 'z' && s[i + 1] == '='))) 
		{
			cnt++;
			i += 2;
		}
		
		else {
			cnt++;
			i += 1;
		}
	}	
	cout << cnt;

}

