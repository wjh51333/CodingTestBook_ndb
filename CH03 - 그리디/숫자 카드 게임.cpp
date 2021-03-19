/*
 * 그리디
 * 숫자 카드 게임
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<int> arr(n, 10000);
	int answer = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int tmp;
			cin >> tmp;
			arr[i] = min(arr[i], tmp);
		}
		answer = max(answer, arr[i]);
	}

	cout << answer;
	return 0;
}