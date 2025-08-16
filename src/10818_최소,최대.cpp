#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int N, min, max;
	cin >> N;
	vector<int> arr;

	int a;
	cin >> a;
	arr.push_back(a);

	min = a;
	max = a;
	for (int i = 1; i < N; i++) {
		cin >> a;
		arr.push_back(a);
		if (a < min) min = a;
		if (a > max) max = a;
	}

	cout << min << " " << max;
	
}
