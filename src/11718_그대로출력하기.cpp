#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{
	string s, line;
	while (getline(cin, s)) {
		if (s.empty()) break;
		else line += (s + "\n");
	}
	cout << line;
}

