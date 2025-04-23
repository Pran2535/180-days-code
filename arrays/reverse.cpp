#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
    vector<int> arr(5, 0);
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5 / 2; i++)
    {
        swap(arr[i], arr[5 - i - 1]);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}