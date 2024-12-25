#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int lowerbound(vector<int> a, int l, int r, int x)
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
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int pos = lowerbound(a, 0, n - 1, x);
	if (pos == -1)
	{
		cout << "NOT FOUND" << endl;
	}
	else
	{
		cout << a[pos] << endl;
	}
}
