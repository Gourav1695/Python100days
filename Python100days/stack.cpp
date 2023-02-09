#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumRounds(vector<int> &tasks)
    {
        sort(tasks.begin(), tasks.end());
        stack<int> st;
        for (int x : tasks)
        {
            st.push(x);
        }
        int count = 1;
        // for (int x : tasks)
        // {
        //     cout << st.top() << endl;
        //     st.pop();
        // }
        int number = 0;
        number = st.top();
        st.pop();
        cout<<st.size()<<endl;
        for (int i = 0; i < st.size(); i++)
        {
            if (st.top() == number)
            {
                count++;
                st.pop();
                
            }
           
        }
         if(count%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            return 1;
    }
};

int main()
{
    Solution solve;
    vector<int> arr = {4,4,4,4,4,4,4};
    solve.minimumRounds(arr);
    return 0;
}