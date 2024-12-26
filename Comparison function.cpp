#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;
int demc(int x) {
	int cnt = 0;
	while (x)
	{
		int r = x % 10;
		if (r % 2 == 0)
		{
			cnt++;
		}
		x /= 10;
	}
	return cnt;
}
int deml(int n)
{
	int cnt = 0;
	while (n)
	{
		int r = n % 10;
		if (r % 2 != 0)
		{
			cnt++;
		}
		n /= 10;
	}
	return cnt;
}
bool cmp(int x, int y)
{
	if (demc(x) != demc(y))
	{
		return demc(x) < demc(y);
	}
	return x < y;
}
bool cmp2(int x, int y)
{
	return deml(x) < deml(y);
}
int main()
{
	int n;
	cin >> n;
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
	stable_sort(b.begin(), b.end(), cmp2);
	for (auto x : b)
	{
		cout << x << " ";
	}
}
