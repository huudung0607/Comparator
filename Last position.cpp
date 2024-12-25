#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int> a, int l, int r , int x)
{
	int res = -1;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (a[mid] == x)
		{
			res = mid;
			l = mid + 1;
		}
		else if (a[mid] > x)
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
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
	cout << binarySearch(a, 0, n - 1, x);
}
