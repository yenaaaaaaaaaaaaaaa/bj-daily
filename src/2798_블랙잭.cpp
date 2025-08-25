#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
	int N, M; cin >> N >> M;
	int a;
	int max = 0;
	vector<int> arr;
	for (int i = 0; i < N; i++) {
		cin >> a;
		arr.push_back(a);
	}
	for (int i = 0; i < arr.size(); i++) {
		for (int j = i + 1; j < arr.size(); j++) {
			for (int k = j + 1; k < arr.size(); k++) {
				int sum = 0;
				sum = (arr[i] + arr[j] + arr[k]);
				if(sum <= M && sum > max){
					max = sum;
				}
				
			}
		}
	}
	cout << max;
}
