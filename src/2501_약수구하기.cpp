#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;


 
int main()
{
	int a, b;
	cin >> a >> b;
	int n = 1;
	while (b > 0) {
		if (a % n == 0) {
			b-=1;
		}
		if (b > 0) {
			if (n > a) {
				cout << 0;
				break;
			}
		}
		else {
			cout << n;
			break;
		}
		n++;
		
	}
}

