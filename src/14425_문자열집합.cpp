#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt = 0;
    int N, M;
    cin >> N >> M;
    vector<string> arr;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        arr.push_back(s);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < M; i++) {
        string s;
        cin >> s;
        auto b = lower_bound(arr.begin(), arr.end(), s);
        if ((b != arr.end()) && *b == s) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
