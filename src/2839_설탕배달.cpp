#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
	int N;
	int i = 0;
	cin >> N;
	int a = N % 5;
	int cnt = 0;
	
	if (a % 3 == 0) {
		cnt += N / 5;
		cnt += a / 3;
		cout << cnt;
		return 0;
	}
	else {
		do {
			int b = N / 5 - i;
			int c = N - (b * 5);
			cnt = 0;
				if (c % 3 == 0) {
					cnt += b;
					cnt += c / 3;
					cout << cnt;
					return 0;
				}
				else {
					i++;
				}
		} while (N / 5 - i >= 0);
	
	}
	cout << -1;
	return 0;
}

