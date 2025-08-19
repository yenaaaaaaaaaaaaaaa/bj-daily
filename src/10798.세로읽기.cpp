#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



int main()
{
	int max_size = 0;
	vector<vector<char>> str(5, vector<char>(15));
	for (int i = 0; i < 5; i++) {
		string a;
		cin >> a;
		for (int j = 0; j < a.size(); j++) {
			str[i][j] = a[j];
		}
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if(str[j][i] != '\0')
				cout << str[j][i];
		}
	}
}

