/*
 * 정렬
 * 성적이 낮은 순서로 학생 출력하기
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(const pair<string, int> a, const pair<string, int> b)
{
	return a.second < b.second;
}

int main()
{
	int n;
	cin >> n;

	vector<pair<string, int>> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i].first >> arr[i].second;
	}

	// 내림차순 정렬
	sort(arr.begin(), arr.end(), cmp);

	for (pair<string, int> tmp : arr) {
		cout << tmp.first << ' ';
	}

	return 0;
}