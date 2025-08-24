#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if ((a + b + c) == 180) {
		if (a == b) {
			if (b == c) cout << "Equilateral";
			else cout << "Isosceles";
		}
		else {
			if (b == c) cout << "Isosceles";
			else if (a == c) cout << "Isosceles";
			else cout << "Scalene";
		}
	}
	else cout << "Error";
}
