#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



int main()
{
	int N, M; cin >> N >> M;
	vector<vector<int>> a(N, vector<int>(M));
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			int e; cin >> e;
			a[n][m] = e;
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			int e; cin >> e;
			a[n][m] += e;
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cout << a[n][m] << " ";
		}
		cout << "\n";
	}
	

}

