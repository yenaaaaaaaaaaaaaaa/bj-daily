#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <cctype>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a; 
    cin >> a;
    if (a >= 90 && a <= 100) cout << "A";
    else if (a < 90 && a >= 80) cout << "B";
    else if (a < 80 && a >= 70) cout << "C";
    else if (a < 70 && a >= 60) cout << "D";
    else cout << "F";
    return 0;
}
