#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;


 
int main()
{
	int a, b;
	do {
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		else if (a % b == 0) cout << "multiple" << '\n';
		else if (b % a == 0) cout << "factor" << '\n';
		else cout << "neither" << '\n';
	} while(1);
	return 0;
}

