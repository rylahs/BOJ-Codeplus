// Code Plus BasicA
// 0x00. Math
// Written by Rylah
// Written Date : 2022.01.12
// https://minteul.tistory.com/302
// https://www.acmicpc.net/source/37432221

// 10430. ³ª¸ÓÁö
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b, c;
	cin >> a >> b >> c;

	cout << (a + b) % c << '\n';
	cout << ((a % c) + (b % c)) % c << '\n';
	cout << (a * b) % c << '\n'; 
	cout << ((a % c) * (b % c)) % c << '\n';

	return 0;
}
