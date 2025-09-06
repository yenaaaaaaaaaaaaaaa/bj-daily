#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N;
    cin >> N;
    unordered_set<string> arr;
    for (long long i = 0; i < N; i++) {
        string a, b; 
        cin >> a >> b;
        if (b == "enter") {
            arr.insert(a);
        }
        else {
            arr.erase(a);
        }
    }
    vector<string> res(arr.begin(), arr.end());
    sort(res.begin(), res.end(),greater<>());
    
    for (auto &i : res) {
        cout << i << '\n';
    }
    return 0;
}
