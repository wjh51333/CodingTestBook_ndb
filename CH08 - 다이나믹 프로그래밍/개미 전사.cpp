/*
 * 다이나믹 프로그래밍
 * 개미 전사
 */

#include <iostream>
#define MAX 100
using namespace std;

int arr[MAX];
int dp[MAX];

int solve(int n)
{
	dp[0] = arr[0];
	dp[1] = max(arr[0], arr[1]);

	for (int i = 2; i < n; i++) {
		dp[i] = max(dp[i - 1], dp[i - 2] + arr[i]);
	}

	return dp[n - 1];
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout << solve(n);
	return 0;
}