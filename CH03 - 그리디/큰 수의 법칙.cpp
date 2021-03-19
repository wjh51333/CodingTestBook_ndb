/* 
 * 그리디
 * 큰 수의 법칙
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

	int N, M, K;
	cin >> N >> M >> K;

	vector<int> arr(N);
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	// 입력받은 수 정렬
	sort(arr.begin(), arr.end(), greater<int>());
	
	int first = arr[0]; // 가장 큰 수
	int second = arr[1]; // 두 번째로 큰 수
	
	// 가장 큰 수가 더해지는 횟수 계산
	int cnt = (M / (K + 1)) * K;
	cnt += M % (K + 1);

	int answer = 0;
	answer += cnt * first; // 가장 큰 수 더하기
	answer += (M - cnt) * second; // 두 번째로 큰 수 더하기

	cout << answer;
	return 0;
}