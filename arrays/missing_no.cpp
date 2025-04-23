#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main()
{
    vector<int> mm = {1, 2, 3, 4, 5};
    int n = 1;
    int ans = mm.size() + 1;
    for (int i = 0; i < mm.size(); i++)
    {
        if (mm[i] != n)
        {
            ans = n;
            return 0;
        }
        n++;
    }
    cout << ans << endl;
}