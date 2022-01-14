// Code Plus BasicA
// 0x00. Math
// Written by Rylah
// Written Date : 2022.01.14
// https://minteul.tistory.com/311
// 

// 6588. ∞ÒµÂπŸ»Â¿« √ﬂ√¯


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

	int n = -1;
	while (n != 0)
	{
		cin >> n;
		if (n == 0) break;
		
		int a = 0;
		bool found = false;
		for (int i = 2; i < 1000001; i++)
		{
			if (Eratos[i] != 0)
			{
				a = n - i;
				if (Eratos[a] != 0)
				{
					found = true;
					cout << n << " = " << i << " + " << a << "\n";
					break;
				}
			}
		}
		if (found == false)
			cout << "Goldbach's conjecture is wrong.\n";
	}

	return 0;
}