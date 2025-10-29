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
	int N;
	cin >> N;
	deque<int> dq;
	for(int i = 0; i < N; i++){
		int a; cin >> a;
		switch(a){
			case 1 : {
				int b; cin >> b;
				dq.push_front(b);
				break;
			}
			case 2 : {
				int b; cin >> b;
				dq.push_back(b);
				break;
			}
			case 3:{
				if(dq.empty()){
					cout << -1 << '\n';
					break;
				}
					int b = dq.front();
					dq.pop_front();
					cout << b << '\n';
					break;
			}
			case 4:{
				if(dq.empty()){
					cout << -1 << '\n';
					break;
				}
					int b = dq.back();
					dq.pop_back();
					cout << b << '\n';
					break;
			}
			case 5 : {
				cout << dq.size() << '\n';
				break;
			}
			case 6 : {
				if(dq.empty()){
					cout << 1 << '\n';
				}
				else {
					cout << 0 << '\n';
				}
				break;
			}
			case 7 : {
				if(dq.empty()){
					cout << -1 << '\n';
					break;
				}
				cout << dq.front() << '\n'; 
				break;
			}
			case 8 : {
				if(dq.empty()){
					cout << -1 << '\n';
					break;
				}
				cout << dq.back() << '\n'; 
				break;
			}
		}
	}
	return 0;
}
