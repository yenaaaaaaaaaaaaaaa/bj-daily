#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
	int a, b, c;
	while(1) {
		cin >> a >> b >> c;
		int arr[3] = { a, b, c };
		sort(arr, arr + 3);
		if ((a == 0) && (b == 0) && (c == 0)) return 0;
		if (arr[0] + arr[1] > arr[2]) {
			if ((arr[0] == arr[1]) && (arr[1] == arr[2])) {
				cout << "Equilateral" << '\n';
			}
			else if ((arr[0] == arr[1]) || (arr[1] == arr[2])) {
				cout << "Isosceles" << '\n';
			}
			else cout << "Scalene" << '\n';
		}
		else cout << "Invalid" << '\n';
	}
}
