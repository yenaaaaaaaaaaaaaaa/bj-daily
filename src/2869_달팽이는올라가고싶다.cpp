#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;


 
int main()
{
	int A, B, V;
	cin >> A >> B >> V;
	int day = (V - B) / (A - B);
	while ((V < 1) || (day * (A - B) + B) < V) {
		day += 1; 
	}
	cout << day;
}

