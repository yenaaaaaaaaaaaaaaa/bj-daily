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
	int N, K; cin >> N; cin >> K;
	int factorial = 1;
	int pac = 1;
	for(int i = 0; i < K; i++){
		pac *= N--;
	}
	while(K> 0){
		factorial = factorial * K--;
	}
	cout << pac / factorial;
}

