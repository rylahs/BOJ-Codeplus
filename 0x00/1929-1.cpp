// Code Plus BasicA
// 0x00. Math
// Written by Rylah
// Written Date : 2022.01.14
// https://minteul.tistory.com/310
// https://www.acmicpc.net/source/37539902

// 1929. 소수 구하기
// use Root Algorithm
// time Complexity : O(N^(1/2))

#include <bits/stdc++.h>
using namespace std;
bool isPrimeNumRootSolve(int n)
{
	if (n < 2)
		return false;
	else
	{
		for (int i = 2; i * i <= n; i++)
		{
			if (n % i == 0)
				return false;
		}
		return true;
	}

}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		if (isPrimeNumRootSolve(i) == true)
			cout << i << '\n';
	}

	return 0;
}
