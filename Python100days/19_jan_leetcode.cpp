// C++ program to find count of subarrays with
// sum divisible by k.
#include <bits/stdc++.h>
using namespace std;

// Handles all the cases
// function to find all sub-arrays divisible by k
// modified to handle negative numbers as well

int subarraysDivByK(vector<int> &nums, int k)
{
	int n = nums.size();
	int prefixMod = 0, result = 0;

	// There are k mod groups 0...k-1.
	vector<int> modGroups(k);
	modGroups[0] = 1;

	for (int num : nums)
	{
		// Take modulo twice to avoid negative remainders.
		prefixMod = (prefixMod + num % k + k) % k;
		// Add the count of subarrays that have the same remainder as the current
		// one to cancel out the remainders.
		result += modGroups[prefixMod];
		modGroups[prefixMod]++;
	}

	return result;
}

// Driver program to run the case
int main()
{
	vector<int>arr = {4, 5, 0, -2, -3, 1};
	int k = 5;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout <<  subarraysDivByK(arr,  k) << endl;

	return 0;
}
