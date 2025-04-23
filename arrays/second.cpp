#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 8, 7};
    int max = 0;
    int sec_max = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > sec_max && arr[i] < max)
        {
            sec_max = arr[i];
        }
    }
    cout << "The second maximum element is: " << sec_max << endl;
}