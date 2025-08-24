#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
	int a1, a0; cin >> a1 >> a0;
	int c; cin >> c;
	int n0; cin >> n0;
	long long f = a1 * n0 + a0; 
	long long g = c * n0;
	if (a1 <= c &&f <= g) cout << 1;
	else cout << 0;
}
