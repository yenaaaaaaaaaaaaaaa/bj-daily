#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int N, M;
	float sum = 0;
	cin >> N;
	vector<float> arr(N);
	int a;
	cin >> a;
	arr[0] = a;
	M = a;
	for (int i = 1; i < N; i++) {
		cin >> a;
		arr[i] = a;
		if (a > M) M = a;
	}
	for (int i = 0; i < N; i++) {
		arr[i] = arr[i] / M * 100;
		sum += arr[i];
	}
	cout << sum / N;
}
