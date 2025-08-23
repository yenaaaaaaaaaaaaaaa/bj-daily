#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;
 
int main() {
	int M, N; cin >> M >> N;
	int sum = 0;
	int min = N;
	for (int i = M; i <= N; i++) {
		int n = 0;
		if (i != 1) {
			for (int j = 1; j <= i; j++) {
				if (i % j == 0) {
					n += 1;
					if (n > 2) {
						break;
					}
				}
			}
			if (n == 2) {
				sum += i;
				if (i <= min) min = i;
			}
		}
	}
	if (sum == 0) cout << -1;
	else cout << sum << '\n' << min;
}

