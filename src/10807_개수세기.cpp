#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int N, v;
	cin >> N;
	vector<int> arr;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		arr.push_back(a);
	}
	cin >> v;
	cout << count(arr.begin(), arr.end(), v);
}
