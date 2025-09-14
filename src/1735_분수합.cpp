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
    vector<pair<int, int>> arr;
    int a, b;
    cin >> a >> b;
    arr.push_back(make_pair(a, b));
    cin >> a >> b;
    arr.push_back(make_pair(a, b));
    int bottom = arr[0].second * arr[1].second;
    int top = arr[0].first * arr[1].second + arr[0].second * arr[1].first;
    b = top; a = bottom;
    while(b != 0){
        int c = a % b;
        a = b;
        b = c;
    }
    bottom /= a;
    top /= a;
    cout << top << ' ' << bottom;
}
