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

    ll t;

    cin >> t;
    ll sum = 0;

    while (t--)
    {

        vector<string> vec;

        string str1;
        cin >> str1;
        vec.pb(str1);

        if (str1 == "Tetrahedron")
        {
            sum += 4;
        }
        else if (str1 == "Cube")
        {
            sum += 6;
        }
        else if (str1 == "Octahedron")
        {
            sum += 8;
        }
        else if (str1 == "Dodecahedron")
        {
            sum += 12;
        }
        else if (str1 == "Icosahedron")
        {
            sum += 20;
        }
    }

    cout << sum << endl;
    return 0;
}
