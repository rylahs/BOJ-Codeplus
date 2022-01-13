// Code Plus BasicA
// 0x00. Math
// Written by Rylah
// Written Date : 2022.01.13
// https://minteul.tistory.com/303
// https://www.acmicpc.net/source/37480110

// 4375. 1
// m : last add 1 , maybe it's very very high num. use long long.
// n : mod number
// count : m length is count iter num

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	
	while (cin >> n) // if is cin infinite looping
	{
		int count = 1;
		long long m = 1;
		while (m % n != 0)
		{
			m = m * 10 + 1;
			m %= n;
			count++;
		}
		cout << count << '\n';
	}
	return 0;
}


