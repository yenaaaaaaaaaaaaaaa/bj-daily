#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
	int x, y, w, h;
	int min = 0;
	cin >> x >> y >> w >> h;
	if (w / 2 < x) {
		min = w - x;
	}
	else {
		min = x;
	}
	if (h / 2 < y) {
		if (h - y < min) min = h - y;
	}
	else {
		if (y < min) min = y;
	}
	cout << min;
}
