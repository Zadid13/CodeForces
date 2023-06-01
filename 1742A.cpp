#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
int main()
{
    optimize();

    int t, a, b, c;
    cin >> t;
    vector<int> nums(3);
    while (t--)
    {

        for (int i = 0; i < 3; i++)
        {

            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());
        if (nums[0] + nums[1] == nums.back())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}