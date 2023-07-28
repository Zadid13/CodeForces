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

    int a[5];
    for (int i = 0; i < 4; i++)
        cin >> a[i];

    sort(a, a + 4);
    for (int i = 0; i < 3; i++)
        cout << a[3] - a[i] << " ";
    cout << endl;

    return 0;
}