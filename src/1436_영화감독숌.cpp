#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
	int N;
	int a = 0;
	int cnt = 0;
	int i = 0;
	cin >> N;
	int n = 0;
	while (1) {
		if(cnt < N){
			if (a % 1000 == 666) {
				i = 0;
				while (i <= 999 && cnt < N) {
					n = 1000 * a + i;
					cnt++;
					i++;
				}
				if (cnt >= N) {
					cout << n;
					return 0;
				}
			}
			else if (a % 100 == 66) {
				i = 0;
				while (i <= 99 && cnt < N) {
					n = 1000 * a + 600 + i;
					cnt++;
					i++;
				}
				if (cnt >= N) {
					cout << n;
					return 0;
				}
			}
			else if (a % 10 == 6){
				i = 0;
				while (i <= 9 && cnt < N) {
					n = 1000 * a + 660 + i;
					cnt++;
					i++;
				}
				if (cnt >= N) {
					cout << n;
					return 0;
				}
				
			}
			else {
				n = 1000 * a + 666;
				cnt += 1;
			}
			a += 1;
		}
		else {
			cout << n;
			return 0;
		}

	}
}

