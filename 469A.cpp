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

    int n;
    cin >> n;

    int m[101] = {0};
    int k[101] = {0};

    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int level;
        cin >> level;
        m[level] = 1;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int level;
        cin >> level;
        k[level] = 1;
    }

    bool can_pass = true;
    for (int i = 1; i <= n; i++)
    {
        if (m[i] == 0 && k[i] == 0)
        {
            can_pass = false;
            break;
        }
    }

    if (can_pass)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
