/*
 * 정렬
 * 위에서 아래로
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// 내림차순 정렬
	sort(arr.begin(), arr.end(), greater<int>());

	for (int k : arr) {
		cout << k << ' ';
	}

	return 0;
}