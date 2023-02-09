#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4};

    stack<int> st;
    for (int i = 0; i < 3; i++)
    {
        st.push(v[i]);
    }
    int temp = 0;
    for (int i = 0; i < 3; i++)
    {
        temp = st.top();
        st.pop();
        cout << temp << " ";
    }
    return 0;
}