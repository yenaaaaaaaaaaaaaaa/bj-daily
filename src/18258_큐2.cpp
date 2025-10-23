#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N; cin >> N;
	queue <int> arr;
	for(int i = 0; i < N; i++){
		string s;
		int num;
		cin >> s;
		if(s=="push"){
			cin >> num;
			arr.push(num);
		}
		else if(s == "pop"){
			if(arr.empty()) cout << -1 << '\n';
			else{
				int res = arr.front();
				cout << res << '\n';
				arr.pop();
			}
		}
		else if(s == "size"){
			cout << arr.size() << '\n';
		}
		else if (s == "empty"){
			if(arr.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if(s == "front"){
			if(arr.empty()) cout << -1 << '\n';
			else cout << arr.front() << '\n';
		}
		else if (s == "back"){
			if(arr.empty()) cout << -1 << '\n';
			else cout << arr.back() << '\n';
		}
	}
return 0;
}
