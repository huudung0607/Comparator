#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

// phan tu cuoi cung < X
int binaryLast(int a[], int l, int r, int x)
{
	int res = -1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] < x)
		{
			res = m;
			l = m + 1;
		}
		else
		{
			r = m - 1;
		}
	}
	return res;
}
int main()
{
	int n, m;
	cin >> n >> m;
	int a[n];
	int b[m];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	sort(b, b + m);
	for (auto x : a)
	{
		cout << binaryLast(b, 0, m - 1, x) + 1 << " ";
	}
}
