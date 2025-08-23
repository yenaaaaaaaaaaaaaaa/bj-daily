#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;
int main()
{
	int n;
	do {
		int a = 1;
		int sum = 0;
		vector<int> arr;
		cin >> n;
		if (n == -1) break;
		while (a < n) {
			if (n % a == 0) {
				arr.push_back(a);
				sum += a;
			}
			a += 1;
		}
		if (sum == n) {
			cout << n << " = ";
			for (int i = 0; i < arr.size() - 1; i++) {
				cout << arr[i] << " + ";
			}
			cout << arr[arr.size() - 1] << '\n';
		}
		else {
			cout << n << " is NOT perfect." << '\n';
		}
	} while (1);
}

