#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{
	string s, t;
	cin >> s;
	t = s;
	reverse(s.begin(), s.end());
	if (t == s) cout << 1;
	else cout << 0;
}

