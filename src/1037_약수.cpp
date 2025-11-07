#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <math.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N; cin >> N;
	vector<int> arr;
	for(int i = 0; i < N; i++){
		int a; cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	cout << arr.front() * arr.back();

	
}

