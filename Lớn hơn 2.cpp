#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int FirstBinarySearch(int a[], int l, int r, int x)
{
	int res = -1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] > x)
		{
			res = m;
			r = m - 1;
		}
		else
		{
			l = m + 1;
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
		int pos = FirstBinarySearch(b, 0, m - 1, x);
		if (pos == -1)
		{
			cout << 0 << " ";
		}
		else
		{
			cout << m - pos << " ";
		}
	}
}
