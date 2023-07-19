#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define pb push_back
#define ll long long

int main()
{
    optimize();

    long long n, k;
    cin >> n >> k;

    long long oddSize = (n + 1) / 2;
    long long evenSize = n / 2;

    if (k <= oddSize)
    {

        cout << 1 + (k - 1) * 2 << endl;
    }
    else
    {

        cout << 2 + (k - oddSize - 1) * 2 << endl;
    }

    return 0;
}

// tc-2

// output = 6 in the 7th index

// 1 2  3 4 5 6 7

// 1 3 5 7

// 2 4 6