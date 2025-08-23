#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;


 
int main()
{
	int N; cin >> N;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int n; cin >> n;
		if (n != 1) {
			int a = 2;
			while (a <= n) {
				if ((n % a) == 0) {
					if (n == a) {
						cnt += 1;
						break;
					}
					else break;
				}
				else a += 1;
			}
		}
		//else continue;
	}
	cout << cnt;
}

