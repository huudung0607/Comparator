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
int binarySearchSecond(vector<int> a, int l, int r, int x)
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
int firstPos(vector<int> a, int l, int r,int x)
{
	int res = -1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == x)
		{
			res = m;
			r = m - 1;
		}
		else if (a[m] > x)
		{
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	return res;
}
int lastPos(vector<int> a, int l, int r, int x)
{
	int res = -1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == x)
		{
			res = m;
			l = m + 1;
		}
		else if (a[m] < x)
		{
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
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int pos = binarySearchFirst(a, 0, n - 1, x);
	cout << pos << endl;
	int pos2 = binarySearchSecond(a, 0, n - 1, x);
	cout << pos2 << endl;
	int pos3 = firstPos(a, 0, n - 1, x);
	cout << pos3 << endl;
	int pos4 = lastPos(a, 0, n - 1, x);
	cout << lastPos(a, 0, n - 1, x) << endl;
	if (pos3 == -1 && pos4 == -1)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << pos4 - pos3 + 1 << endl;
	}
}
