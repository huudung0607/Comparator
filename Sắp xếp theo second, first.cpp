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

bool cmp2(pair<int, int> x, pair<int, int> y)
{
	if (x.second != y.second)
	{
		return x.second < y.second;
	}
	return x.first > y.first;
}
int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}
	sort(v.begin(), v.end(), cmp2);
	for (auto x : v)
	{
		cout << x.first << " " << x.second << endl;
	}
}
