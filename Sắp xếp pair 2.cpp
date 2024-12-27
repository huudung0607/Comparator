#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

int cmp(pair<int, int> a, pair<int, int> b)
{
    int abs1 = abs(a.first - a.second);
    int abs2 = abs(b.first - b.second);
    if (abs1 == abs2)
    {
        if (a.first == b.first)
        {
            return a.second > b.second;
        }
        return a.first < b.first;
    }
    return abs1 < abs2;
}
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    cout << endl;
    sort(v.begin(), v.end(), cmp);
    for (auto x : v)
    {
        cout << x.first << " " << x.second << endl;
    }
}
