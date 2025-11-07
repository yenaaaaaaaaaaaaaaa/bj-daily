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
	int N; cin >> N;
	unordered_set <string> arr;
	int cnt = 0;
	for(int i = 0; i < N; i++){
		string s; cin >> s;
		if(s == "ENTER"){
			arr.clear(); 
			continue;
		}
		if(arr.empty()){
			cnt++;
			arr.insert(s);
		}
		else{
			if(arr.find(s) == arr.end()){
				cnt++;
				arr.insert(s);
			}
			else{
				continue;
			}
		}
	}
	cout << cnt;
}

