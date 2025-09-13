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
    long long A, B;
    cin >> A >> B;
    if (A == 0 || B == 0) {
        cout << 0;
        return 0;
    }
    long long a, b;
    a = A; b = B;
    if (B > A) {
        a = B; b = A;
    }
    while (b != 0) {
        long long c = a % b;
        a = b;
        b = c;
    }
    cout << A * B / a;
}
