/*#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1e6 + 5;

string s, t;

int a[N], b[N], c[N];
int la, lb, lc;

bool cmp(string s,string t)
{
	if (s.size() > t.size())
		return false;
	else if (s.size() < t.size())
		return true;
	else
		return s < t;

}


void sub(int a[], int b[], int c[])
{
	for (int i = 0; i < lc; i++)
	{
		c[i] += a[i] - b[i];
		if (c[i] < 0)
		{
			c[i] += 10;
			c[i + 1] -= 1;
		}
	}
	while (c[lc - 1] == 0 && lc>1 )lc--;
}


int main()
{
	cin >> s >> t;


	if (cmp(s,t))
	{
		cout << '-';
		swap(s, t);
	}

	la = s.size();
	lb = t.size();
	lc = max(la, lb);

	for (int i = 0; i < la; i++)
		a[la - 1 - i] = s[i] - '0';
	for (int i = 0; i < lb; i++)
		b[lb - 1 - i] = t[i] - '0';

	

	sub(a, b, c);


	for (int i = lc-1; i >= 0; i--)
		cout << c[i];

	return 0;
}*/