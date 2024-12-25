#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int upperbound(vector<int>a, int l, int r, int x)
{
	int res = -1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] > x)
		{
			r = m - 1;
		}
		else if (a[m] < x)
		{
			res = m;
			l = m + 1;
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
	int pos = upperbound(a, 0, n - 1, 3);
	cout << a[pos];
}
