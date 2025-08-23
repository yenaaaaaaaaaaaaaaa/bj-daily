#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;


 
int main()
{
	long long N; cin >> N;
	int cnt = 1;
	int range = 2;
	while (N >= range) {
			range += 6 * cnt;
			cnt += 1;
	}
	cout << cnt;
	return 0;

}

