#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <cctype>
#include <map>
using namespace std;
bool is_prime(int a);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    while (cin >> N) {
        if(N == 0) return 0;
        int cnt = 0;
        for (int i = N + 1; i <= 2 * N; i++) {
            if (is_prime(i)) cnt++;
        }
        cout << cnt << '\n';
    }
    
}

bool is_prime(int a) {
    if (a < 2) return false;
    if (a == 2 || a == 3) return true;
    if (a % 2 == 0|| a % 3 == 0) return false;
    for (int i = 5; i <= a / i; i += 6) {
        if (a % i == 0 || a % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
