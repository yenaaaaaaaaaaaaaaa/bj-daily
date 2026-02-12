#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_set>
#include <deque>
#include <math.h>
using namespace std;

int main()
{

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	unordered_map<string,pair<int, int>> arr;
	int N; cin >> N;
	int M; cin >> M;
	for(int i = 0; i < N; i++){
		string s; cin >> s;
		if(s.length() < M){
			continue;
		}
		else{
			if(arr.find(s)!= arr.end()){
				arr[s].first--;
			}
			else{
				arr.insert({s,{100000, 10 - s.length()}});
			}
		}
	}
	deque <pair<string,pair<int,int>>> d_arr(arr.begin(), arr.end());
	deque <pair<pair<int,int>,string>> s_arr;
	for(int i = 0; i < d_arr.size(); i++){
		string s = d_arr[i].first;
		int cnt = d_arr[i].second.first;
		int len = d_arr[i].second.second;
		s_arr.push_back({{cnt,len},s});
	}
		sort(s_arr.begin(), s_arr.end());
	for(int i = 0; i < s_arr.size(); i ++){
		cout << s_arr[i].second << "\n";
	}
}

