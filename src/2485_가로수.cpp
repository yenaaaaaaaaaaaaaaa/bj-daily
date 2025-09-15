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
    vector<int> arr;
    unordered_set<int> gap;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    int gcd_= arr[1] - arr[0];
    for (int i = 0; i < N - 2; i++) {
        int a = arr[i + 2] - arr[i + 1];
        int b = gcd_;
        if (a < b) {
            int t = a;
            a = b;
            b = t;
        }
        while (b != 0) {
            int c = a % b;
            a = b;
            b = c;
        }
        gcd_ = a;
        
    }
    int cnt = 0;
    for (int i = 0; i < N - 1; i++) {
        int a = arr[i + 1] - arr[i];
        cnt += a / gcd_ - 1;
    }
    cout << cnt;}
