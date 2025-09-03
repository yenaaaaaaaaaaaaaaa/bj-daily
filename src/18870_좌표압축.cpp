#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> arr;
    vector<int> arr_;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
        arr_.push_back(a);
    }

    sort(arr_.begin(), arr_.end());
    arr_.erase(unique(arr_.begin(), arr_.end()), arr_.end());

    for (int i = 0; i < N; i++) {
        int a = arr[i];
        cout << lower_bound(arr_.begin(), arr_.end(), a) - arr_.begin() << ' ';
    }
    return 0;
}
