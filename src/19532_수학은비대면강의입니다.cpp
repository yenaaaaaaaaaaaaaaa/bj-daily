#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int x, y;
	
	
	if (a == 0) {
		y = c / b;
		x = (f - e * y) / d;
	}
	else if (b == 0) {
		x = c / a;
		y = (f - d * x) / e;
	}

	else if (d == 0) {
		y = f / e;
		x = (c - b * y) / a;
	}

	else if (e == 0) {
		x = f / d;
		y = (c - a * x) / b;
	}
	else {
		
			y = (f * a - d * c) / (a * e - d * b);
			x = (c - b * y) / a;
	}
	
	cout << x << ' ' << y;
	return 0;
}
