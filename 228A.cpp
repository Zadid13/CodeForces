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

    unordered_set<int> colors; // Insert the color into the set. Sets only store unique elements, so duplicates won't be added
    int col;
    for (int i = 0; i < 4; i++)
    {
        cin >> col;
        colors.insert(col); // Insert the color into the set. Sets only store unique elements, so duplicates won't be added
    }

    int misscol = 4 - colors.size(); // Calculate the number of missing colors by subtracting the size of the set from 4
    cout << misscol << endl;

    return 0;
}

/*This code ensures that only the unique colors are stored in the set, and then calculates how many colors Valera needs to buy to have four horseshoes of different colors*/