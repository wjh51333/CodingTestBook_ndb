/*
 * 구현
 * 게임 개발
 */

#include <iostream>
using namespace std;

int n, m;
int map[51][51];
bool visited[51][51];

int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, 1, 0, -1 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	int x, y, d;
	cin >> x >> y >> d;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	int answer = 1;
	visited[x][y] = true;

	while (1) {
		bool check = false;
		for (int i = 0; i < 4; i++) {
			int dir = (d + 3 - i) % 4;
			int nx = x + dx[dir];
			int ny = y + dy[dir];

			if (nx < 1 || ny < 1 || nx >= n || ny >= m) continue;

			if (!visited[nx][ny] && !map[nx][ny]) {
				d = dir;
				visited[nx][ny] = true;
				x = nx; y = ny;
				answer++;
				check = true;
				break;
			}
		}

		if (!check) {
			int nx = x - dx[d];
			int ny = y - dy[d];

			if ((nx > 0 && ny > 0 && nx < n && ny < m) && !map[nx][ny]) {
				x = nx; y = ny;
			}
			else {
				cout << answer;
				return 0;
			}
		}
	}

	return 0;
}