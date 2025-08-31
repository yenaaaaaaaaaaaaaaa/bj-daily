#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, x;
    cin >> N;

    static int cnt[10001] = {0}; // 1~10000 빈도
    for (int i = 0; i < N; ++i) {
        cin >> x;
        ++cnt[x];
    }

    // 정렬된 순서로 출력 (카운팅 정렬)
    for (int v = 1; v <= 10000; ++v) {
        while (cnt[v]--) cout << v << '\n';
    }
    return 0;
}
