#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
	vector<int> arr;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int a = 0;
		cin >> a;
		arr.push_back(a);
		sum += a;
	}
	sort(arr.begin(), arr.end());
	cout << sum / 5 << '\n';
	cout << arr[2];
}

