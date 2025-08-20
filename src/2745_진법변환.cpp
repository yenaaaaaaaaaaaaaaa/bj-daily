#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;



int main()
{
	string N;
	int B;
	long long res = 0;
	cin >> N >> B;
	for (int i = 0; i < N.size() ; i++) {
		int p = 1;
		for (int j = 0; j < i; j++) p *= B;
		if (isalpha(N[N.size() - i - 1])) {
			res += p * (N[N.size() - i - 1] - 'A' + 10);
		}
		else 
			res += p * (N[N.size() - i - 1] - '0');
		
	}
	cout << res;
}

