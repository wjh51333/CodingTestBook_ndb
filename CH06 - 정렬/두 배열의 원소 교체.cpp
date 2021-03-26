/*
 * 정렬
 * 두 배열의 원소 교체
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	vector<int> b(n);

	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];

	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<int>());

	for (int i = 0; i < k; i++) {
		if (a[i] >= b[i])
			break;

		a[i] = b[i];
	}

	int answer = 0;
	for (int k : a) {
		answer += k;
	}
	cout << answer;

	return 0;
}