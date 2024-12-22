#include <iostream>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

bool binarySearch(vector<int> a, int l, int r, int x)
{
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == x)
		{
			return true;
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
	return false;
}

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	bool found = false;
	for (int i = 0; i < n; i++)
	{
		if (binarySearch(a,0,n-1,x))
		{
			found = true;
		}
	}
	if (found)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
