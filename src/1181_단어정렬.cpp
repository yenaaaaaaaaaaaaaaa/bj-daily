#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    string s;
    vector<vector<string>> arr(51);
    for (int i = 0; i < N; i++) {
        cin >> s;
        int n = s.size() - 1;
        arr[n].push_back(s);
    }
    
    for (int i = 0; i < arr.size(); i++) {
        sort(arr[i].begin(), arr[i].end());
        for (int j = 0; j < arr[i].size(); j++) {
            if (arr[i][j].empty()) {
                break;
            }
            if (j != 0 && arr[i][j - 1] == arr[i][j]) {
                continue;
            }
            else cout << arr[i][j] << '\n';
        }
    }
    return 0;
}
