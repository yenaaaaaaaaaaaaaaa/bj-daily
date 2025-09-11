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
    string s;
    cin >> s;
    int N = s.size();
    vector<unordered_set<string>> arr(N + 1);
    for (int i = 1; i <= N; i++) {
        string a;
        for (int j = 0; j + i <= N; j++) {
            a = s.substr(j, i);
            arr[i].insert(a);
        }
    }
    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        cnt += arr[i].size();
    }
    cout << cnt;
    return 0;
}
