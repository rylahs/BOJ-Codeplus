// Code Plus BasicA
// 0x00. Math
// Written by Rylah
// Written Date : 2022.01.13
// https://minteul.tistory.com/307
// https://www.acmicpc.net/source/37502374

// 2609. 최대공약수와 최소공배수
// use Euclidean Algorithm
// time Complexity : O(logN)


#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0) // GCD Find State
		return a;
	else // Recursive Find GCD
		return gcd(b, a % b);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b;
	cin >> a >> b;
	int gcdValue = gcd(a, b);
	cout << gcdValue << "\n";
	// LCM is A * B / GCD(A, B)
	cout << a * b / gcdValue << "\n";
	return 0;
}