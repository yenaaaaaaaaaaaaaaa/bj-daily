#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
	long long N; cin >> N;
	while (N % 2 == 0) {
		N /= 2;
		cout << 2 << '\n';
	}
	for (int i = 3; i <= N; i += 2) {
		while (N % i == 0) {
			N /= i;
			cout << i << '\n';
		}
	}
}
