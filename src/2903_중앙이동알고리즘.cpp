#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;



int main()
{
    int N; cin >> N;
    int res = 4;
    for (int i = 1; i <= N; i++) {
        int l = pow(2, i - 1) + 1;
        double a = pow(2, i);
        double b = pow(2, 2 * i - 2);
        res += l * a + b;
    }
    cout << res;
        
}

