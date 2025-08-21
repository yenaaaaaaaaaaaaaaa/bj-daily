#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;



int main()
{
    long long N, B;
    string res;

    cin >> N >> B;
    if (N == 0) {
        cout << 0;
        return 0;
    }
    while (N > 0) {
        int i = (N % B);
        if (i >= 0 && i <= 9) {
            res.push_back('0' + i);
        }
        else res.push_back('A' + (i - 10));
        N /= B;
    }
    reverse(res.begin(), res.end());
    cout << res;
    
}

