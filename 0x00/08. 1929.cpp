// Code Plus BasicA
// 0x00. Math
// Written by Rylah
// Written Date : 2022.01.14
// https://minteul.tistory.com/310
// https://www.acmicpc.net/source/37540153

// 1929. 소수 구하기
// use Sieve of Eratosthenes
//time Complexity : O(NloglogN)

#include <bits/stdc++.h>
using namespace std;

int Eratos[1000003];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	for (int i = 2; i < 1000003; i++)
		Eratos[i] = i;

	for (int i = 2; i < 1000003; i++)
	{
		for (int j = i + i; j < 1000003; j += i)
		{
			if (Eratos[j] == 0)
				continue;
			Eratos[j] = 0;
		}
	}

	int a, b;
	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		if (Eratos[i] != 0)
			cout << i << "\n";
	}

	return 0;
}