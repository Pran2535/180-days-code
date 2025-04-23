#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main()
{
    vector<int> arr = {2, 7, 4, 11, 8};
    int last = arr[arr.size() - 1];
    for (int i = arr.size() - 1; i > 0; i--)
    {

        arr[i] = arr[i - 1];
    }
    arr[0] = last;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}