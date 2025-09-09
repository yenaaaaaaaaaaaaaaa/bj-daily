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
    cin >> N >> M;
    vector<int> A;
    vector<int> res;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < M; i++) {
        int a;
        cin >> a;
        auto b = lower_bound(A.begin(), A.end(), a);
        if (b != A.end() && *b == a) {
            A.erase(b);
        }
        else {
            res.push_back(a);
        }
    }
    int cnt = A.size() + res.size();
    cout << cnt;
    return 0;
}
