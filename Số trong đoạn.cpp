#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

int binarySearchFirst(vector<int> a, int l, int r, int x)
{
	int res = -1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] >= x)
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
int binarySearchLast(vector<int> a, int l, int r, int x)
{
	int res = -1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] <= x)
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
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int q;
	cin >> q;
	while (q--)
	{
		int l, r;
		cin >> l >> r;
		int posl = binarySearchFirst(a, 0, n - 1,l);
		int posr = binarySearchLast(a, 0, n - 1, r);
		cout << posr - posl + 1 << endl;
	}
}
