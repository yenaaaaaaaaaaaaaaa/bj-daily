#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
	int N, M;
	char chess[8][8];
	char chess2[8][8];

	//체스판 그리기
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					chess[i][j] = 'W';
					chess2[i][j] = 'B';
				}
				else {
					chess[i][j] = 'B';
					chess2[i][j] = 'W';
				}
			}
			else {
				if (j % 2 == 0) {
					chess[i][j] = 'B';
					chess2[i][j] = 'W';
				}
				else {
					chess[i][j] = 'W';
					chess2[i][j] = 'B';
				}
			}
		}
	}
	//보드
	cin >> N >> M;
	vector<vector<char>> board(N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			char a;
			cin >> a;
			board[i].push_back(a);
		}
	}
	//비교
	int diff1 = 0, diff2 = 0;
	int x = 0, y = 0;
	int min = 64; 
	for (y = 0; y <= (N - 8); y++) {
		for (x = 0; x <= (M - 8); x++) {
			diff1 = 0; diff2 = 0;
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					char a = chess[i][j];
					char b = chess2[i][j];
					if (board[i + y][j + x] != a) diff1 += 1;
					if (board[i + y][j + x] != b) diff2 += 1;
				}
			}
			if (diff1 < min) min = diff1;
			if (diff2 < min) min = diff2;
		}
	}
	cout << min;
}
