/*
 * 구현
 * 왕실의 나이트
 */

#include <iostream>
using namespace std;

int dx[] = { -2, -2, -1, -1, 1, 1, 2, 2 };
int dy[] = { -1, 1, -2, 2, -2, 2, -1, 1 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char now[3];
	cin >> now;

	int x = now[1] - '0';
	int y = now[0] - 'a' + 1;
	int answer = 0;

	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx > 0 && ny > 0 && nx <= 8 && ny <= 8) 
			answer++;
	}
	cout << answer;
	
	return 0;
}