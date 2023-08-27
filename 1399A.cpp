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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        reverse(vec.begin(), vec.end());

        bool is_true = true;
        for (int j = 0; j < n - 1; j++)
        {
            if (vec[j] - vec[j + 1] > 1)
            {
                is_true = false;
                break;
            }
        }

    //For upper loop 
    /*This code snippet is inside a loop that iterates through the vector vec and checks a specific condition between adjacent elements. Let's explain this with an example:

Suppose you have the vector vec containing some integers:


vec = {5, 4, 2, 2, 1}
In this example, n (the size of the vector) is 5.

The loop for (int j = 0; j < n - 1; j++) is designed to iterate through the vector from index 0 to index n - 2 (since it goes up to n - 2 inclusively due to the condition < n - 1). This is done to compare each element with the one next to it.

Inside the loop, the condition if (vec[j] - vec[j + 1] > 1) is used to check if the difference between the current element vec[j] and the next element vec[j + 1] is greater than 1.

Let's go through the iterations of this loop step by step using our example:

Iteration 1 (j = 0):

vec[0] = 5
vec[1] = 4
Condition: 5 - 4 > 1 (True)
is_true remains true
Iteration 2 (j = 1):

vec[1] = 4
vec[2] = 2
Condition: 4 - 2 > 1 (True)
is_true remains true
Iteration 3 (j = 2):

vec[2] = 2
vec[3] = 2
Condition: 2 - 2 > 1 (False)
is_true becomes false
Since the condition becomes false during the third iteration, the loop breaks early, and the value of is_true remains false.

In this example, the condition is false because the difference between the adjacent elements 2 and 2 is not greater than 1. Therefore, the final value of is_true is false.

The is_true flag is used to determine whether the given condition holds for all adjacent elements in the vector. If it holds for all adjacent pairs, the value of is_true remains true, indicating that the condition is satisfied for the entire vector. If the condition is not satisfied for any adjacent pair, is_true becomes false, indicating that the condition is not met for the vector.*/

        if (is_true)
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