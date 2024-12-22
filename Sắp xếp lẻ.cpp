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
int demle(int n)
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
	if (demle(x) != demle(y))
	{
		return demle(x) > demle(y);
	}
	return x < y;
}
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end(), cmp);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
