#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    vector<string> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        b[i] = v[i];
    }
    sort(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";   
    }
    cout << endl;
    sort(b.begin(), b.end(), greater<string>());
    for (auto x : b)
    {
        cout << x << " ";
    }
}
