/*
 * DFS/BFS
 * 미로 탈출
 */

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <algorithm>
#define MAX 201
using namespace std;

int n, m;
int frame[MAX][MAX];

int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%1d", &frame[i][j]);
		}
	}

	queue<pair<int, int>> q;
	q.push(make_pair(1, 1));

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 1 || ny < 1 || nx > n || ny > m) continue;
			if (frame[nx][ny] == 0) continue;

			if (frame[nx][ny] == 1) {
				frame[nx][ny] = frame[x][y] + 1;
				q.push(make_pair(nx, ny));
			}
		}
	}
	cout << frame[n][m];

	return 0;
}