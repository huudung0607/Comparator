#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;
int x;
int cmp(int a, int b)
{
	if (abs(a - x) != abs(b -x))
	{
		return abs(a - x) < abs(b - x);
	}
	return a < b;
}
int cmp2(int x, int y)
{
	if (x % 2 == 0 && y % 2 != 0)
	{
		return 1;
	}
	if (x % 2 != 0 && y % 2 == 0)
	{
		return 0;
	}
	if (x % 2 == 0 && y % 2 == 0)
	{
		return x < y;
	}
	return x > y;
}
int main()
{
	int n;
	cin >> n >> x;
	vector<int> a(n);
	vector<int> b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a.begin(), a.end(), cmp);
	for (auto x : a)
	{
		cout << x << " ";
	}
	cout << endl;
	sort(b.begin(), b.end(), cmp2);
	for (auto x : b)
	{
		cout << x << " ";
	}
}
