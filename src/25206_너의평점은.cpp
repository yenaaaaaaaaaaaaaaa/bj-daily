#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



int main()
{
	string course, grade;
	double credit, gn, credit_sum = 0;
	double sum = 0;
	vector<pair<string, double>> g = { {"A+",4.5},{"A0",4.0},{"B+",3.5},{"B0",3.0},{"C+",2.5},{"C0",2.0},{"D+",1.5},{"D0",1.0},{"F",0.0}};
	for (int i = 0; i < 20; i++) {
		cin >> course >> credit >> grade;

		if (grade == "P") {
			credit = 0;
			gn = 0;
		}
		else {
			for (int j = 0; j < 9; j++) {
				if (g[j].first == grade) {
					gn = g[j].second;
				}
			}
		}
		credit_sum += credit;
		sum += gn * credit;
	}
	cout << sum / credit_sum;
}

