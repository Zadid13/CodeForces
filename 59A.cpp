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

    string str;
    cin >> str;
    int cntup = 0, cntlow = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (islower(str[i]))
        {
            cntlow++;
        }
        else
        {
            cntup++;
        }
    }
    if (cntup > cntlow)
    {
        string newupstr;
        for (int i = 0; i < str.size(); i++)
        {
            newupstr = toupper(str[i]);
            for (int i = 0; i < newupstr.size(); i++)
            {
                cout << newupstr;
            }
        }
    }
    else
    {
        string newlowstr;
        for (int i = 0; i < str.size(); i++)
        {
            newlowstr = tolower(str[i]);
            for (int i = 0; i < newlowstr.size(); i++)
            {
                cout << newlowstr;
            }
        }
    }

    return 0;
}