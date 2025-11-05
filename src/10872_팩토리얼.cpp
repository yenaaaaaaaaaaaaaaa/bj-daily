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
	int res = 1;
	while(N > 0){
		res = res * N--;
	}
	cout << res;
}

