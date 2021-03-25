/*
 * DFS/BFS
 * 음료수 얼려 먹기
 */

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define MAX 1000
using namespace std;

int n, m;
int frame[MAX][MAX];
bool visited[MAX][MAX];

int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

void dfs(int x, int y)
{
	visited[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (x < 0 || y < 0 || x >= n || y >= m) continue;

		if (!visited[nx][ny] && !frame[nx][ny]) {
			dfs(nx, ny);
		}
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &frame[i][j]);
		}
	}

	int answer = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!visited[i][j] && !frame[i][j]) {
				dfs(i, j);
				answer++;
			}
		}
	}
	cout << answer;

	return 0;
}