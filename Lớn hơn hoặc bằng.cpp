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

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	vector<int> b(m);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	sort(b.begin(), b.end());
	for (auto x : a)
	{
		auto it = lower_bound(b.begin(), b.end(), x);
		int chiso = it - b.begin();
		cout << m - chiso << " ";
	}
}
