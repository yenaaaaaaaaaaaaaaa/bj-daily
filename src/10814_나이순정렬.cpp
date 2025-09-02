#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<vector<string>> arr(200);
    for (int i = 0; i < N; i++) {
        int a;
        string b;
        cin >> a >> b;
        arr[a - 1].push_back(b);
    }
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << i + 1 << ' ' << arr[i][j] << '\n';
            
        }
    }
    return 0;
}
