/*
 * 구현
 * 상하좌우
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	cin.ignore(); // 버퍼 비우기

	string dir;

	getline(cin, dir);

	int x = 1;
	int y = 1;

	for (int i = 0; i < dir.size(); i++) {
		int nx = -1;
		int ny = -1;

		if (dir[i] == 'L') {
			nx = x;
			ny = y - 1;
		}
		else if (dir[i] == 'R') {
			nx = x;
			ny = y + 1;
		}
		else if (dir[i] == 'U') {
			nx = x - 1;
			ny = y;
		}
		else if (dir[i] == 'D') {
			nx = x + 1;
			ny = y;
		}

		if (nx < 1 || ny < 1 || nx > n || ny > n) continue;

		x = nx;
		y = ny;
	}

	cout << x << " " << y;
	return 0;
}