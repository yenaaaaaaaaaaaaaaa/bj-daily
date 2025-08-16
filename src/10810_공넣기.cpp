#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int N, M, i, j, k;
	cin >> N >> M;
	vector<int> arr(N, 0);
	while(M) {
		cin >> i >> j >> k;
		for (i; i <= j; i++) {
			arr[i - 1] = k;
		}
		M--;
	}
	for (int a = 0; a < N; a++) {
		cout << arr[a] << " ";
	}
	
}
