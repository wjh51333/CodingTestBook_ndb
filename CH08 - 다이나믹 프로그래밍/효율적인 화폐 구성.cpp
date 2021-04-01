/*
 * 다이나믹 프로그래밍
 * 효율적인 화폐 구성
 */

#include <iostream>
#include <algorithm>
#define MAX 101
#define INF 10001
using namespace std;

int arr[MAX];
int dp[10001];

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	// 화폐 구성이 불가능한 수로 초기화
	fill(dp, dp + m + 1, INF);

	// 화폐를 하나도 사용하지 않았을 때 만들 수 있으므로 0
	dp[0] = 0;

	for (int i = 0; i < n; i++) {
		for (int j = arr[i]; j <= m; j++) {
			// 금액 j를 만들 수 있는 최소한의 화폐 개수
			dp[j] = min(dp[j], dp[j - arr[i]] + 1);
		}
	}

	if (dp[m] != INF)
		cout << dp[m];
	else
		cout << -1;

	return 0;
}