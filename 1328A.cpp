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
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a % b != 0)
        {
            count = b - (a % b);
        }
        else if (a % b == 0)
        {
            count = (a % b);
        }
        cout << count << endl;
    }

    return 0;
}

/*Let's go through the code step-by-step and explain each line:

1. `#include <bits/stdc++.h>`: This line includes the C++ Standard Library, which contains various standard header files required for the code.

2. `using namespace std;`: This line allows the use of standard library functions and objects without explicitly specifying the `std::` prefix.

3. `#define optimize() ...`: This is a preprocessor macro used to optimize input/output operations, similar to what we have discussed before.

4. `int main()`: This is the main function where the program execution starts.

5. `optimize();`: This macro is called to optimize input/output operations, as explained in point 3.

6. `int t, count = 0;`: This line declares two integer variables `t` (number of test cases) and `count` (to store the minimum number of moves needed to make `a` divisible by `b`). The variable `count` is initialized to 0.

7. `cin >> t;`: This line reads the number of test cases from the input.

8. `while (t--)`: This is a loop that runs for `t` iterations, representing each test case.

9. `int a, b;`: This line declares two integer variables `a` and `b`, which represent the values of the test case.

10. `cin >> a >> b;`: This line reads the values of `a` and `b` from the input.

11. `if (a % b != 0)`: This condition checks if `a` is not divisible by `b`, i.e., if the remainder when `a` is divided by `b` is not equal to 0.

12. `count = b - (a % b);`: If `a` is not divisible by `b`, this line calculates the minimum number of moves needed to make `a` divisible by `b` and stores it in the `count` variable. The value of `count` will be `b` minus the remainder when `a` is divided by `b`.

13. `else if (a % b == 0)`: This condition checks if `a` is divisible by `b`, i.e., if the remainder when `a` is divided by `b` is equal to 0.

14. `count = (a % b);`: If `a` is divisible by `b`, this line sets the value of `count` to the remainder when `a` is divided by `b`. In this case, no moves are needed, and the minimum number of moves will be 0.

15. `cout << count << endl;`: After processing each test case, this line prints the value of `count`, which represents the minimum number of moves needed to make `a` divisible by `b`.

16. `return 0;`: This line indicates the successful termination of the `main` function.

The code calculates the minimum number of moves needed to make `a` divisible by `b` for each test case, taking into account both cases where `a` is divisible and where it is not. The output will be the minimum number of moves required for each respective test case, as expected.*/