#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N; cin >> N;
	vector <int> type(N);
	deque <int> dq;
	vector<int> res;
	for (int i = 0 ; i < N; i++){
		int a; cin >> a;
		type[i]= a;
	}
	for(int i = 0; i < N; i++){
		int a; cin >> a;
		if(!type[i]){
			dq.push_back(a);
		}
	}
	int M; cin >> M;
	for(int i = 0; i < M; i++){
		int a; cin >> a;
		dq.push_front(a);
		res.push_back(dq.back());
		dq.pop_back();
	}
	for(int i =0; i < res.size(); i++){
		cout << res[i] << " ";
	}
}
/*
4
0 1 1 0
1 2 3 4
3
2 4 7
*/
