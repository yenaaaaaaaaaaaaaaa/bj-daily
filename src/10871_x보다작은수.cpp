#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int N, x;
	cin >> N >> x;
	vector<int> arr;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		arr.push_back(a);
	}
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] < x) {
			cout << arr[i] << " ";
		}
	}
}
