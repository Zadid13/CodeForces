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
#define all(x) vec.begin(), vec.end()
#define ins insert
#define ll long long

int main()
{
    optimize();

    int n;
    cin >> n;
    string winner;
    vector<string> vec;
    vec.reserve(n);

    for (int i = 0; i < n; i++)
    {
        string goal;
        cin >> goal;
        vec.push_back(goal);
    }

    string t1 = vec[0];
    string t2;

    for (auto goal : vec)
    {
        if (goal != t1)
        {
            t2 = goal;
            break;
        }
    }

    int cnt_t1 = count(all(x), t1);
    int cnt_t2 = n - cnt_t1;

    if (cnt_t1 > cnt_t2)
    {
        winner = t1;
    }
    else if (cnt_t1 < cnt_t2)
    {
        winner = t2;
    }
    else
    {
        winner = vec[0];
    }

    cout << winner << endl;
    return 0;
}
