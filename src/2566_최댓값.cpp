#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



int main()
{
	int mx = 0, mn, mm;
	for (int n = 0; n < 9; n++) {
		for (int m = 0; m < 9; m++) {
			int a;
			cin >> a;
			if (a >= mx) {
				mx = a;
				mn = n;
				mm = m;
			}
			
		}
	}
	cout << mx << '\n' << mn + 1 << ' ' << mm + 1;
	return 0;
}

