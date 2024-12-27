#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long res = 0;
    if (k == 0)
    {
        int i = 0;
        while (i < n)
        {
            int j = i;
            while (j < n && a[i] == a[j])
            {
                j++;
            }
            long long ans = j - i;
            res += ans * (ans - 1) / 2;
            i = j;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            auto first = lower_bound(a.begin() + i + 1, a.end(), a[i] + k);
            auto last = upper_bound(a.begin() + i + 1, a.end(), a[i] + k);
            res += last - first;
        }
    }
    cout << res << endl;
}
