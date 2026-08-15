/*#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1e6 + 10;
int la,lb,lc;
string s, t;
int a[N], b[N], c[N];


void add(int a[], int b[], int c[])
{
	for (int i = 0; i < lc; i++)
	{
		c[i] += a[i] + b[i];
		c[i + 1] += c[i] / 10;//至于为什么有些答案写 c[i + 1] += c[i] / 10 而不是 =：在这个写法里，写 c[i+1] 的时候它还是 0，所以两种写法一样；+= 只是更稳妥，避免万一 c[i+1] 里已经有值被覆盖掉。
		c[i] %= 10;
	}

	while (c[lc] != 0) lc++;
}



int main()
{
	cin >> s >> t ;

	la = s.size();
	lb = t.size();
	lc = max(la, lb);

	for (int i = 0; i < la; i++)
		a[la - 1 - i] = s[i] - '0';

	for (int i = 0; i < lb; i++)
		b[lb - i - 1] = t[i]-'0';

	add(a, b, c);

	for (int i = lc-1; i>=0 ; i--)
		cout << c[i];


	return 0;
}*/