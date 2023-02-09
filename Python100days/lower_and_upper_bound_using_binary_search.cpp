#include <bits/stdc++.h>
using namespace std;

int lower1_bound(vector<int> &v, int element)
{
    int low = 0, high = v.size() - 1;
    while (high - low > 1)
    {
        int mid = (high + low) / 2;   
        if (v[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    if (v[low] >= element)
    {
        return low;
    }
    else if (v[high] >= element)
    {
        return high;
    }
    else
    {
        return -1;
    }
}
int upper1_bound(vector<int> &v, int element)
{
    int low = 0, high = v.size() - 1;
    while (high - low > 1)
    {
        int mid = (high + low) / 2;
        if (v[mid] <= element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    if (v[low] > element)
    {
        return low;
    }
    else if (v[high] > element)
    {
        return high;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    int element;
    cin >> element;
    int low_bd = lower1_bound(v, element);
    cout << low_bd << " " << (low_bd != -1 ? v[low_bd] : -1) << endl;
    int upper_bd = upper1_bound(v, element);
    cout << upper_bd << " " << (upper_bd != -1 ? v[upper_bd] : -1) << endl;
}