#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target = 10;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << i << endl;
            return 0;
        }
    }
}