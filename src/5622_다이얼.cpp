#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	cin >> s;
	int time = 0;
	for (int i = 0; i < s.size(); i++) {
		int num = s[i] - 'A';
		if (num <= 17) time += (num / 3) + 3;
		else {
			num -= 1;
			if (num == 24) time += 10;
			else time += (num / 3) + 3;
			
		}
	}
	cout << time;
}

