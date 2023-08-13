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

    int n, points, amz(0);
    int minV = INT_MAX, maxv = INT_MIN;
    cin >> n;
    if (n > 0)
    {
        int fpoint;
        cin >> fpoint;
        minV = maxv = fpoint;
    }

    for (int i = 1; i < n; i++)
    {
        {
            cin >> points;
        }

        if (points < minV)
        {
            minV = points;
            amz++;
        }
        else if (points > maxv)
        {
            maxv = points;
            amz++;
        }
    }
    cout << amz << endl;

    return 0;
}