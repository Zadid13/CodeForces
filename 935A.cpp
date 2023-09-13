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

    int i, n, cnt = 1;
    cin >> n;
    for (i = 2; i * i < n; i++)
    {
        if (n % i == 0)
            cnt += 2;
    }
    if ((double)sqrt(n) == (int)sqrt(n))
        cnt++;
    cout << cnt << endl;

    return 0;
}
