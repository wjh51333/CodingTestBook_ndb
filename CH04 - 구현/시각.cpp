/*
 * 구현
 * 시간
 */

#include <iostream>
using namespace std;

bool check(int h, int m, int s)
{
	if (h / 10 == 3 || h % 10 == 3 || m / 10 == 3 || m % 10 == 3 || s / 10 == 3 || s % 10 == 3)
		return true;
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int answer = 0;
	
	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < 60; j++) {
			for (int k = 0; k < 60; k++) {
				if (check(i, j, k))
					answer++;
			}
		}
	}

	cout << answer;
	return 0;
}