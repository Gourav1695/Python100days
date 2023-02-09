// C++ program for the above approach;

#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum number of
// flips required to make string increasing
int minimumFlips(string s)
{

    // Length of s
    int n = s.size();

    // Total number of zero in s
    int cnt0 = count(s.begin(), s.end(), '0');

    // Stores count of 1s till ith index
    int cnt1 = 0;

    // stores the minimum count of flip
    int res = n - cnt0;

    // Traverse the given string
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            cnt0 -= 1;
        }

        // Update the value of res
        // and count of 1s
        else if (s[i] == '1')
        {
            res = min(res, cnt1 + cnt0);
            cnt1++;
        }
    }

    // Return the minimum number
    // of flips
    return res;
}

// Driver code
int main()
{

    // Given string
    string S = "000000";

    // function call
    cout << minimumFlips(S);
    return 0;
}

// This code is contributed by parthmanchanda81
