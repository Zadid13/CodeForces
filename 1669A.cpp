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
    vector<int> vec;
    vec.reserve(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];

        if (vec[i] >= 1900)
        {
            cout << "Division"
                 << " " << 1 << '\n';
        }
        else if (vec[i] >= 1600 && vec[i] <= 1899)
        {
            cout << "Division"
                 << " " << 2 << '\n';
        }
        else if (vec[i] >= 1400 && vec[i] <= 1599)
        {
            cout << "Division"
                 << " " << 3 << '\n';
        }
        else if (vec[i] <= 1399)
        {
            cout << "Division"
                 << " " << 4 << '\n';
        }
    }

    return 0;
}
