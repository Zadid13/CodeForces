// #include <bits/stdc++.h>
// using namespace std;
// #define optimize()                \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define endl "\n"
// #define pb push_back
// #define f first
// #define s second
// #define lb lower_bound
// #define ub upper_bound
// #define all(vec) vec.begin(), vec.end()
// #define ins insert
// #define ld long double
// #define ll long long

// int main()
// {
//     optimize();

//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;

//         ll sum = 0;
//         ll arr[n];

//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             sum += arr[i];
//         }

//         for (int i = 0; i < n; i++)
//         {
//             ll curr = sum - arr[i];
//             if ((arr[i] % 2 == 0 && curr % 2 == 0) || (arr[i] % 2 == 1 && curr % 2 == 1))
//             {
//                 cout << "Yes" << endl;
//                 break;
//             }
//         }

//         cout << "No" << endl;
//     }

//     return 0;
// }

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
#define ld long double
#define ll long long

int main()
{
    optimize();

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll sum = 0;
        ll arr[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        bool found = false;

        for (ll i = 0; i < n; i++)
        {
            ll curr = sum - arr[i];
            if ((arr[i] % 2 == 0 && curr % 2 == 0) || (arr[i] % 2 == 1 && curr % 2 == 1))
            {
                found = true;
                cout << "YES" << endl;
                break;
            }
        }

        if (!found)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
