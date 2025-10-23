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
	queue <int> card;
	for(int i = 0; i < N; i++){
		card.push(i + 1);
	}
	while(card.size() > 1){
		card.pop();
		int a = card.front();
		card.pop();
		card.push(a);
	}
	cout << card.front();
}
