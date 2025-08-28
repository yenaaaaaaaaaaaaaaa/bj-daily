#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> arr(N, 0);
	for (int i = 0; i < N; i++) {
		int a; 
		cin >> a;
		arr[i] = a;
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < N; i++) {
		cout << arr[i] << '\n';
	}
}

