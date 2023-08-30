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

    int sum = 0, a = 0, b = 0, n(3);

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    if (vec[0] > vec[1] && vec[2] < vec[1])
    {
        a = (vec[0] - vec[1]);
        b = (vec[1] - vec[2]);
        sum = a + b;
    }

        cout << sum << endl;

    return 0;
}