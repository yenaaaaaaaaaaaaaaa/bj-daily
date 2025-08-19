#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



int main()
{
	int xy[100][100] = { 0 };
	int n; cin >> n;
	int s = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		for (int j = a; j < a + 10; j++) {
			for (int k = b; k < b + 10; k++) {
				if (xy[j][k] == 0) {
					xy[j][k] = 1;
					s += 1;
				}
			}
		}
	}
	cout << s;
}

