/*
 * 이진 탐색
 * 부품 찾기
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binarySearch(vector<int> arr, int target)
{
	int left = 0;
	int right = arr.size() - 1;
	
	while (left <= right) {
		int mid = (left + right) / 2;

		if (arr[mid] == target)
			return true;
		else if (arr[mid] > target) // 중간점의 값보다 찾고자 하는 값이 작은 경우 왼쪽 확인
			right = mid - 1;
		else // 중간점의 값보다 찾고자 하는 값이 큰 경우 오른쪽 확인
			left = mid + 1;
	}

	return false;
}

int main()
{
	int n, m;
	cin >> n;
	
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr.begin(), arr.end());

	cin >> m;
	vector<int> target(m);
	for (int i = 0; i < m; i++) cin >> target[i];

	for (int k : target) {
		if (binarySearch(arr, k))
			cout << "yes ";
		else
			cout << "no ";
	}

	return 0;
}