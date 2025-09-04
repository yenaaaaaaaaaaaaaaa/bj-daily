#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    cin >> N;
    vector<int> arrN;
    for (int i = 0; i < N; i++) {
        int a; 
        cin >> a;
        arrN.push_back(a);
    }
    sort(arrN.begin(), arrN.end());
    
    cin >> M;
    for (int i = 0; i < M; i++) {
        int a;
        cin >> a;
        auto b = lower_bound(arrN.begin(), arrN.end(), a);
        if ( b != arrN.end() && a == *b) {
            cout << 1 << ' ';
        }
        else cout << 0 << ' ';

    }
    return 0;
}
