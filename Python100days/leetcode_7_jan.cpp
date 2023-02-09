#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int sum = 0;
        int ans = 0;
        vector<int> n;
        for (int i = 0; i < gas.size(); i++)
        {
            sum += gas[i] - cost[i];
        }
        if (sum >= 0)
        {
            for (int i = 0; i < gas.size(); i++)
            {
                ans = gas[i] - cost[i];
                n.push_back(ans);
            }
            int index = 0;
            int max = INT_MIN;
            for (int i = 0; i < gas.size(); i++)
            {
                if (n[i] > max)
                {
                    max = n[i];

                    index = i;
                }
            }
            // cout << *max_element(n.begin(), n.end()) << endl;
            cout << index << endl;
        }
        else
        {
            cout << "-1" << endl;
            return -1;
            ans = -1;
        }
        // cout << ans << endl;
        return ans;
    }
};

int main()
{
    Solution solve;
    vector<int> arr1 = {2,3,4};
    vector<int> arr2 = {3,4,3};

    solve.canCompleteCircuit(arr1, arr2);
    return 0;
}