#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;



int main()
{
    int T; cin >> T;
    for (int i = 0; i < T; i++) {
        int res[4] = { 0 };
        int C; cin >> C;
            if (C >= 25) {
                res[0] = C / 25;
                C %= 25;
            }
            if (C >= 10) {
                res[1] = C / 10;
                C %= 10;
            }
            if (C >= 5) {
                res[2] = C / 5;
                C %= 5;
            }
            if(C >= 1) {
                res[3] = C / 1;
                C %= 1;
            }
        for (int j = 0; j < 4; j++) {
            cout << res[j] << ' ';
        }
        cout << '\n';
        
    }
    
}

