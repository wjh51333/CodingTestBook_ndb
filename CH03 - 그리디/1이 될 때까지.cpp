/*
 * 그리디
 * 1이 될 때까지
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	int answer = 0;

	while (1) {
		// N이 K로 나누어 떨어지는 수가 될 때까지만 1씩 빼기
		int target = (n / k) * k;
		answer += (n - target);
		n = target;

		// N이 K보다 작을 때 (더 이상 나눌 수 없을 때) 반복문 탈출
		if (n < k)
			break;

		answer++;
		n /= k;
	}

	// 마지막으로 남은 수에 대하여 1씩 빼기
	answer += (n - 1);
	cout << answer;

	return 0;
}