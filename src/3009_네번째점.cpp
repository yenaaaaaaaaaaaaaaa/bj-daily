#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
	vector<vector<int>> arr;
	int x, y;
	for (int i = 0; i < 3; i++) {
		int a, b;
		cin >> a >> b;
		if (!arr.empty()) {
			for (int j = 0; j < arr.size(); j++) {
				if (arr[j][0] == a) {
					arr[j][0] = 0;
					a = 0;
				}
				if (arr[j][1] == b) {
					arr[j][1] = 0;
					b = 0;
				}
			}
		}
		arr.push_back({ a, b });
	}
	for (int k = 0; k < arr.size(); k++) {
		if (arr[k][0] != 0) x = arr[k][0];
		if (arr[k][1] != 0) y = arr[k][1];
	}
	cout << x << " " << y;
	return 0;
}
