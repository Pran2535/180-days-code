#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main()
{
    int f1 = 0;
    int f2 = 1;
    for (int i = 0; i < 5; i++)
    {
        cout << f1 << ",";
        int f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
}