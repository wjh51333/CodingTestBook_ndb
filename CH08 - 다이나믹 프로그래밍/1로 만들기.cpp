/*
 * 다이나믹 프로그래밍
 * 1로 만들기
 */

#include <iostream>
#define MAX 30001
using namespace std;

int dp[MAX];

int solve(int n)
{
	dp[1] = 0;

	for (int i = 2; i <= n; i++) {
		// 현재의 수에서 1을 빼는 경우
		dp[i] = dp[i - 1] + 1;

		// 현재의 수가 2로 나누어 떨어지는 경우
		if (i % 2 == 0)
			dp[i] = min(dp[i], dp[i / 2] + 1);

		// 현재의 수가 3으로 나누어 떨어지는 경우
		if (i % 3 == 0)
			dp[i] = min(dp[i], dp[i / 3] + 1);

		// 현재의 수가 5로 나누어 떨어지는 경우
		if (i % 5 == 0)
			dp[i] = min(dp[i], dp[i / 5] + 1);
	}

	return dp[n];
}

int main()
{
	int n;
	cin >> n;

	cout << solve(n);
	return 0;
}