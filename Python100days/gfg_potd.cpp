#include <bits/stdc++.h>
using namespace std;

class Solution {
    public int removeStudents(int[] h, int N) {
        int dp[] = new int[N];
        int max = 0;
        for(int curr = 0; curr < N; curr++){
            dp[curr] = 1;
            for(int prev = 0; prev < curr; prev++){
                if(h[curr] > h[prev] && dp[curr] < dp[prev] +1){
                    dp[curr] = dp[prev]+1;
                }
            }
        max = Math.max(max, dp[curr]);
        }
        return N-max;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N ;
        cin>>N;
        int H[N];
        for(int i=0;i<N;i++)
        cin>>H[i];
        Solution ob;
        cout<<ob.removeStudents(H,N)<<end;
    }
    return 0;
}