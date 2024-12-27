#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

int cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    if (a.first == b.first)
    {
        if (a.second.first == b.second.first)
        {
            return a.second.second < b.second.second;
        }
        return a.second.first < b.second.first;
    }
    return a.first < b.first;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, pair<int, int>>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second.first >> v[i].second.second;
    }
    cout << endl;
    sort(v.begin(), v.end(), cmp);
    for (auto x : v)
    {
        cout << x.first << " " << x.second.first << " " << x.second.second << endl;
    }
}
