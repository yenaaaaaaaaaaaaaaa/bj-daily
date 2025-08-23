#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;


 
int main()
{
	int x; cin >> x;
	int X = 1;
	int res[2] = { 0,0 };
	while (x > 0) {
		int a = 1, b = X;
		if (X % 2 == 0) {
			while ((a <= X) && (b >= 1)) {
				if (x > 0) {
					res[0] = a;
					res[1] = b;
					a++;
					b--;
					x--;
				}
				else break;
			}
			X += 1;
		}
		else {
			int b = 1, a = X;
			while ((b <= X) && (a >= 1)) {
				if (x > 0) {
					res[0] = a;
					res[1] = b;
					a--;
					b++;
					x--;
				}
				else break;
			}
			X += 1;
		}
		}
	
		
	cout << res[0] << '/' << res[1];
	

}

