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
    map <string, int> nametoidx;
    vector<string> idxtoname;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        nametoidx.insert({ s, i });
        idxtoname.push_back(s);
    }
    for (int i = 0; i < M; i++) {
        string s;
        cin >> s;
        if (isdigit(s[0])) {
            cout << idxtoname[stoi(s) - 1] << '\n';
        }
        else {
            cout << nametoidx[s] + 1<< '\n';
        }
    }
    
}
