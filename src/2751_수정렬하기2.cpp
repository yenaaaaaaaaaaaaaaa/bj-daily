#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
	int N, x;
	cin >> N;
	vector<int> arr(N, 0);
	int res;
	for(int i = 0; i < N; i++) {
		cin >> x;
		arr[i] = x;
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < N; i++) {
		res = arr[i];
		cout << res <<'\n';
	}
	return 0;
}

