// Code Plus BasicA
// 0x00. Math
// Written by Rylah
// Written Date : 2022.01.14
// https://minteul.tistory.com/309
// https://www.acmicpc.net/source/37537355

// 1978. 소수 찾기
// use Sieve of Eratosthenes
// time Complexity : O(NloglogN)


#include <bits/stdc++.h>
using namespace std;

int Eratos[1003];


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	for (int i = 2; i < 1003; i++)
		Eratos[i] = i;
	for (int i = 2; i < 1003; i++)
	{
		if (Eratos[i] == 0)
			continue;
		for (int j = i + i; j < 1003; j += i)
			Eratos[j] = 0;

	}


	int testCase;
	cin >> testCase;
	int primeCount = 0;
	while (testCase--) 
	{
		int a;
		cin >> a;
		if (Eratos[a] != 0)
			primeCount++;
	}

	cout << primeCount << '\n';

	return 0;
}