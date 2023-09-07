#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(vec) vec.begin(), vec.end()
#define ins insert
#define ll long long

int main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec;
        vec.reserve(n);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            mp[vec[i]]++;
        }
        bool dec = false;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] == 0)
                continue;
            if (mp.find(vec[i] - 1) == mp.end())
            {
                cout << "NO" << endl;
                dec = true;
                break;
            }
            if (mp[vec[i] - 1] < mp[vec[i]])
            {
                cout << "NO" << endl;
                dec = true;
                break;
            }
        }
        if (dec == false)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}