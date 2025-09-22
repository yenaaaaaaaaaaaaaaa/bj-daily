#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <cctype>
#include <map>
using namespace std;
//bool is_prime(int a);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	cin >> N;
	int max = 0;
	vector<int> arr(N);
	
	for (int i = 0; i < N; i++) {
		int a; cin >> a;
		arr[i] = a;
		if (a > max) max = a;
	}
	vector<int> prime(max + 1, 0);
	int x = 2;
	prime[0] = prime[1] = 1;
	while (max >= x) {
		int a = x;
		if (prime[a] == 0) {
			a += x;
			while (a <= max) {
				if (prime[a] == 0) prime[a] = 1;
				a += x;
			}
		}
		x += 1;
	}
	
	for (int i = 0; i < N; i++) {
		int cnt = 0;
		int o = arr[i];
		for (int j = 2; j <= o / 2; j++) {
			if (prime[j] == 0 && prime[o - j] == 0) cnt += 1;
		}
		cout << cnt << '\n';
	}
	return 0;

}

//bool is_prime(int a) {
//if (a < 2) return false;
//else if (a == 2 || a == 3) return true;
//else if (a % 2 == 0|| a % 3 == 0) return false;
//else {
//    for (int i = 5; i <= a / i; i += 6) {
//        if (a % i == 0 || a % (i + 2) == 0) {
//            return false;
//        }
//    }
//}
//return true;
//}
