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
    int N, M;
    int cnt = 0;
    cin >> N >> M;
    string name;
    map<string, string> arr;
    vector<string> res;
    for (int i = 0; i < N; i++) {
        cin >> name;
        arr.insert({ name, "" });
    }
    for (int i = 0; i < M; i++) {
        cin >> name;
        auto b = arr.find(name);
        if (b != arr.end()) {
            cnt++;
            res.push_back(name);
        }
    }
    sort(res.begin(), res.end());
    cout << cnt << '\n';
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << '\n';
    }
    return 0;
}
