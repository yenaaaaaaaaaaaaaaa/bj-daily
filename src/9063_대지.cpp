#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
	int lx, rx, ly, ry;
	int N; cin >> N;
	int a, b;
	cin >> a >> b;
	lx = a; rx = a;
	ly = b; ry = b;
	for (int i = 1; i < N; i++) {
		cin >> a >> b;
		if (a <= lx) lx = a;
		else if (a >= rx) rx = a;
		if (b <= ly) ly = b;
		else if (b >= ry) ry = b;
	}
	cout << (rx - lx) * (ry - ly);
}
