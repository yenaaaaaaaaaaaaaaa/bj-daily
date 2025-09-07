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
    cin >> N;
    map<int, int> arr;
    int a; cin >> a;
    arr.insert({ a, 1 });
    for (int i = 1; i < N; i++) {
        cin >> a;
        if (arr.find(a) == arr.end()) {
            arr.insert({ a, 1 });
        }
        else {
            arr[a]++;
        }
    }
    cin >> M;
    vector<int> res(M);
    for (int i = 0; i < M; i++) {
        cin >> a;
        int b = arr[a];
        res[i] = b;
    }
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << ' ';
    }
    return 0;
}
