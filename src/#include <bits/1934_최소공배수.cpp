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
    int N;
    cin >> N;
    unordered_set<int> arr;
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        int x = a;
        int y = b;
        while (a != b) {
            while (a < b) {
                a += x;
            }
            while (b < a) {
                b += y;
            }
        }
        if (a == b) {
            cout << a << '\n';
        }
    }
}
