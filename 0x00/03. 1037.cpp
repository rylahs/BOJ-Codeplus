// Code Plus BasicA
// 0x00. Math
// Written by Rylah
// Written Date : 2022.01.13
// https://minteul.tistory.com/304
// https://www.acmicpc.net/source/37480855

// 1037. ¾à¼ö
// minValue : 1000001 (input MAX : 1,000,000)
// maxValue : 2 (input MIN : 2)

// Real Number = minValue * maxValue

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int maxValue = 2;
	int minValue = 10000001;
	while (n--)
	{
		int a;
		cin >> a;
		maxValue = max(maxValue, a);
		minValue = min(minValue, a);
	}
	int result = maxValue * minValue;

	cout << result << '\n';
	return 0;
}