#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <math.h>
using namespace std;
vector<vector<int>> com(30, vector<int>(30,-1));
int combination(int K, int N){
	if(K - N < N) N = K - N; 
	if(com[K][N] != -1) return com[K][N];
	if( N == 0 || N == K){
		return  com[K][N] = 1;
	}
	else if(K == 1) return com[K][N] = 1;
	return com[K][N] = combination(K - 1, N - 1) + combination(K - 1, N);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int cnt; cin >> cnt;
	for(int i = 0; i < cnt; i++){
		int N, K; cin >> N; cin >> K;

		cout << combination(K, N) << '\n';
	}
}

