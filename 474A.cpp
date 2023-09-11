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
char keyboard[100] = "qwertyuiopasdfghjkl;zxcvbnm,./";
int main()
{
    optimize();

    char way[2];
    cin >> way;

    string input;
    cin >> input;

    if (way[0] == 'L')
    {
        for (char c : input)
        {
            for (int j = 0; keyboard[j] != '\0'; j++)
            {
                if (c == keyboard[j])
                {
                    cout << keyboard[j + 1];
                    break;
                }
            }
        }
        cout << endl;
    }
    else
    {
        for (char c : input)
        {
            for (int j = 0; keyboard[j] != '\0'; j++)
            {
                if (c == keyboard[j])
                {
                    cout << keyboard[j - 1];
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
