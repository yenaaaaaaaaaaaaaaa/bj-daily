#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
	long long N; cin >> N;
	long long a = 1;
	long long M;
	long long sum = 0;
	do {
		M = a;
		sum = M;
		while (M / 10 > 0) {
			sum += (M % 10);
			M /= 10;
		}
		sum += M;
		a++;
	} while ((sum != N) && (a - 1 < N));

	if (sum == N) {
		cout << a - 1;
	}
	else {
		cout << 0;
	}
	return 0;
}
