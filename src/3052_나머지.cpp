#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int n, count = 0;
	vector<int> arr(42, 0);
	for (int i = 0; i < 10; i++) {
		cin >> n;
		arr[n % 42] += 1;
	}

	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] > 0) {
			count++;
		}
	}
	cout << count;
}
