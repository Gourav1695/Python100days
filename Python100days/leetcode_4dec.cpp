#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        
        int output=0;
        
        for (auto freq : mp){
            if(freq.second==1)
                return -1;
            if(freq.second%3==0){
                output += freq.second/3;
            }
            else{
                output += freq.second/3 + 1;
            }
        }
        cout<<output<<endl;
        return output;
    }
};

int main()
{
    Solution solve;
    vector<int> arr = {3,3,2,4,4,4,4};
    solve.minimumRounds(arr);
    // return 0;
}
