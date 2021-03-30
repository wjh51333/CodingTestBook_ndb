/*
 * 다이나믹 프로그래밍
 * 바닥 공사
 */

#include <iostream>
#define MAX 1001
#define MOD 796796
using namespace std;

int dp[MAX];

int solve(int n)
{
	dp[1] = 1;
	dp[2] = 3;

	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % MOD;
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