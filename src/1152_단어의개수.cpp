#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{
	string S;
	int res = 0;
	getline(cin, S);
	res = count(S.begin(), S.end(), ' ');
	if (S[0] == ' ') res -= 1;
	if (S[S.size() - 1] == ' ') res -= 1;
	cout << res + 1;
}
