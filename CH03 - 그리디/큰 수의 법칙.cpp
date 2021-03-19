/* 그리디
 * 큰 수의 법칙
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, K;
	cin >> N >> M >> K;

	vector<pair<int, int>> arr;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		arr.push_back(make_pair(n, 0));
	}


	int sum = 0;
	int lastIndex = 0;
	for (int i = 0; i < M; i++) {
		int max = arr[0].first;
		int index = 0;

		for (int j = 1; j < N; j++) {
			if (arr[j].first > max && arr[j].second < K) {
				max = arr[j].first;
				index = j;
			}
		}

		sum += arr[index].first;
		arr[index].second++;

		if (lastIndex != index) {
			arr[lastIndex].second = 0;
			lastIndex = index;
		}
	}
	cout << sum;

	return 0;
}