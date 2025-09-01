#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    int x, y;
    vector<vector<int>> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        arr[i].push_back(x);
        arr[i].push_back(y);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < N; i++) {
        cout << arr[i][0] << ' ' << arr[i][1] << '\n';
    }
    return 0;

}
