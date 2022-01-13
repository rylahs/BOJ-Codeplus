// Code Plus BasicA
// 0x00. Math
// Written by Rylah
// Written Date : 2022.01.13
// https://minteul.tistory.com/305
// https://www.acmicpc.net/source/37483790

// 17427. 약수의 합 2
// sum = i * (n / i);
// O(n)

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	long long sum = 0;
	for (int i = 1; i <= n; i++)
		sum += i * (n / i);
	
	cout << sum << '\n';
	return 0;
}