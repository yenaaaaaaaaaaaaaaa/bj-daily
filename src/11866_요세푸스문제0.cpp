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
	int N, K; cin >> N; cin >> K;
	queue <int> arr;
	queue <int> res;
	for(int i = 0; i < N; i++){
		arr.push(i + 1);
	}
	while (arr.size()!=0){
		for(int i = 1; i < K; i++){
			int a = arr.front();
			arr.pop();
			arr.push(a);
		}
		int a = arr.front();
		arr.pop();
		res.push(a);
	}
	cout << "<";
	for(int i = 0; i < N - 1; i++){
		cout << res.front() << ", ";
		res.pop();
	}
	cout << res.front() << ">";
	return 0;
}
