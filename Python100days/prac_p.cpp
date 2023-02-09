#include <bits/stdc++.h>
using namespace std;

int subarraysDivByK(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    int sum = 0, ans = 0;
    mp[0] = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        sum = sum % k;
        ans += mp[(sum + k) % k];
        mp[(sum + k) % k]++;
    }
    return ans;
}

int main(){
    vector<int>nums={4,2,4,-2,3};
    int k=4;
    subarraysDivByK(nums,k);

    return 0;
}