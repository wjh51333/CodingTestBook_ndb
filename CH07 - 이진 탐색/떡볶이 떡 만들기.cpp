/*
 * 이진 탐색
 * 떡볶이 떡 만들기
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) 
		cin >> arr[i];
	sort(arr.begin(), arr.end());

	int left = 1;
	int right = arr.back();
	int answer = 0;

	while (left <= right) {
		int mid = (left + right) / 2;
		long long sum = 0;

		for (int k : arr)
			if (k - mid > 0)
				sum += k - mid;

		if (sum >= m) {// 필요한 길이보다 더 많이 절단되므로 더 높여야 한다
			left = mid + 1;

			if (answer < mid)
				answer = mid;
		}
		else { // 절단기에 설정할 수 있는 높이를 줄여본다
			right = mid - 1;
		}
	}
	cout << answer;

	return 0;
}