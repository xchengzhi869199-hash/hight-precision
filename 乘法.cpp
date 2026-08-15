/*#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1e5;

int a[N], b[N], c[N];

int la, lb, lc;

string s, t;


void mul(int a[], int b[], int c[])
{
	for (int i = 0; i < la; i++)
	{
		for (int j = 0; j < lb; j++)
		{
			c[i + j] += a[i] * b[j];
		}
	}


	for (int i = 0; i < lc; i++)
	{
		c[i + 1] += c[i] / 10;
		c[i] %= 10;
	}

	while (lc>1 && c[lc-1]==0) lc--;//前导零
}



int main()
{
	cin >> s >> t;

	la = s.size();
	lb = t.size();
	lc = la + lb;

	for (int i = 0; i < la; i++)
		a[la - 1 - i] = s[i] - '0';
	for (int i = 0; i < lb; i++)
		b[lb - 1 - i] = t[i] - '0';

	mul(a, b, c);

	for (int i = lc - 1; i >= 0; i--)
		cout << c[i];


	return 0;

}*/


