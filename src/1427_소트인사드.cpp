#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N;
    cin >> N;
    static int a[10] = { 0 };

    while (N > 0) {
        int i = N % 10;
        a[i]++;
        N /= 10;
    }

    for (int i = 9; i >= 0; i--) {
        while (a[i]) {
            cout << i;
            a[i]--;
        }
        
    }
    return 0;
}
