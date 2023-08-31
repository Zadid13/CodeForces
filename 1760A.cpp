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

    int t;
    cin >> t;
    while (t--)
    {
        vector<int> vec(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        cout << vec[1] << endl;
    }

    return 0;
}