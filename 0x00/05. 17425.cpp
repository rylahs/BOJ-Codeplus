// Code Plus BasicA
// 0x00. Math
// Written by Rylah
// Written Date : 2022.01.13
// https://minteul.tistory.com/306
// 

// 17425. 약수의 합
// sum = i * (n / i);
// it's diffrent 17427
// num 1000000 loop 10000

#include <bits/stdc++.h>
using namespace std;
long long dSum[1000002];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	dSum[1] = 1;
	for (int i = 2; i < 1000001; i++)
	{
		for (int j = 1; j * i < 1000001; j++)
		{
			dSum[i * j] += i;
		}
		dSum[i] += (dSum[i - 1] + 1);
	}
	int testCase;
	cin >> testCase;
	while (testCase--)
	{
		int n;
		cin >> n;

		cout << dSum[n] << '\n';
	}
	return 0;
}