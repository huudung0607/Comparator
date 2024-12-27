#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char> a(n);
    vector<char> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a.begin(), a.end());
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;
    sort(b.begin(), b.end(), greater<char>());
    for (auto x : b)
    {
        cout << x << " ";
    }
}
