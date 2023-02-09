#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b)
    {
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0)
            return 0;
        // we are sorting  with the end value of the vector of vector
        sort(points.begin(), points.end(), comp);
        
        int arrows = 1;
        int last = points[0][1];
        
        for(int i=1; i<points.size(); i++)
        {
            if(points[i][0]>last)
            {
                arrows++;
                last = points[i][1];
            }
            else{
                // do nothing
            }
        }
        cout<<arrows<<endl;
        return arrows;
    }
};


int main(){
    Solution solve;
    vector<vector<int>>v={{10,16},{2,8},{1,6},{7,12}};
    solve.findMinArrowShots(v);
    return 0;
}