#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

long long cmp(pair<int, int> pa, pair<int, int> pb)
{
	long long d1 = pa.first * pa.first + pa.second * pa.second;
	long long d2 = pb.first * pb.first + pb.second * pb.second;
	if (d1 == d2)
	{
		if (pa.first == pb.first)
		{
			return pa.second < pb.second;
		}
		return pa.first < pb.first;
	}
	return d1 < d2;
}

int main() {
    int n;
    cin >> n;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end(), cmp);
	for (auto x : v)
	{
		cout << x.first << " " << x.second << endl;
	}
}
