#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int n = 1;
	queue<int> arr;
	vector<int> t;
	for(int i = 0; i < N; i++){
		int a;
		cin >> a;
		arr.push(a);
	}

	while(n <= N){

		while (!arr.empty() && arr.front() != n){
			int a;
			int b;
			if(!t.empty()){
				a = t.back();
				b = arr.front();
				if(a < b){
					cout << "Sad";
					return 0;
				}
			}
			t.push_back(arr.front());
			arr.pop();
		}

		while(!arr.empty() && arr.front() == n){
			arr.pop();
			n++;
		}

		while(!t.empty() && t.back() == n){
			t.pop_back();
			n++;
		}
	}
	if(arr.size() + t.size() == 0){
		cout << "Nice";
	}
	else cout << "Sad";
	return 0;

}
