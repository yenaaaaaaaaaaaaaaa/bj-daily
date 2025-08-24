#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int arr[3] = { a, b, c };
	sort(arr, arr + 3);
	while (arr[0] + arr[1] <= arr[2]) {
		arr[2] -= 1;
	}
	cout << arr[0] + arr[1] + arr[2];
	
}
