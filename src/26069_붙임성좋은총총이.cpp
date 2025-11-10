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
	unordered_set<string> dance;
	dance.insert("ChongChong");
	for(int i = 0; i < N; i++){
		string a, b; cin >> a >> b;
		auto isdancing_a = dance.find(a);
		auto isdancing_b = dance.find(b);
		if(isdancing_a != dance.end() || isdancing_b != dance.end()){
			dance.insert(a);
			dance.insert(b);
		}
	}

	cout << dance.size();
	return 0;
}

