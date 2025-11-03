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
	deque <pair<int,int>> q;
	vector <int> idx(N);
	vector <int> res;
	for(int i = 0; i < N; i++){
		int a; cin >> a;
		q.push_back({a, i+1});
		idx[i] = a;
	}	
	do{
		int num = q.front().first;
		int index = q.front().second;
		q.pop_front();
		res.push_back(index);
		if(q.empty()) break;
		
		if(num > 0){
			for(int i = 0; i < num - 1; i++){
				int n = q.front().first;
				int index = q.front().second;
				q.pop_front();
				q.push_back({n,index});
			}
		}
		else{
			
			for(int i = (-num) % q.size(); i > 0; i--){
				int n = q.back().first;
				int index = q.back().second;
				q.pop_back();
				q.push_front({n,index});
			}
		}
	}while(!q.empty());

	for(int i = 0; i < N; i++){
		cout << res[i]  << " ";
	}
	return 0;
}
