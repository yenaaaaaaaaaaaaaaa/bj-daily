#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <cctype>
#include <map>
using namespace std;
bool is_prime(unsigned long long a);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        unsigned long long a, b;
        cin >> a;
        b = a;
        if (a <= 2) {
            cout << 2 << '\n';
            continue;
        }
        else if (a == 3) {
            cout << 3 << '\n';
            continue;
        }
        else {
            int c;
            if (b % 2 == 0) {
                b++;
            }
            if (b % 6 == 3) {
                b += 2;
                c = 2;
            }
            else if (b % 6 == 1) c = 4;
            else if (b % 6 == 5) c = 2;
            while (!is_prime(b)) {
                b += c;
                c = 6 - c;
            }
            cout << b << '\n';
        }
    }
}

bool is_prime(unsigned long long a) {
    for (unsigned long long int i = 5; i <= a / i; i += 6) {
        if (a % i == 0 || a % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
