// C++ program for the above approach
#include<bits/stdc++.h>
using namespace std;

// Function that finds gcd of 2 strings
string gcd(string str1, string str2)
{

	// If str1 length is less than
	// that of str2 then recur
	// with gcd(str2, str1)
	if (str1.length() < str2.length())
	{
		return gcd(str2, str1);
	}

	// If str1 is not the
	// concatenation of str2
	else if(str1.find(str2) != 0)
	{
		return "";
	}
	else if (str2 == "")
	{
	
		// GCD string is found
		return str1;
	}
	else
	{
	
		// Cut off the common prefix
		// part of str1 & then recur
		return gcd(str1.substr(str2.length()), str2);
	}
}

// Function to find GCD of array of
// strings
// string findGCD(string arr[], int n)
// {
// 	string result = arr[0];
// 	for (int i = 1; i < n; i++)
// 	{
// 		result = gcd(result, arr[i]);
// 	}

// 	// Return the GCD of strings
// 	return result;
// }

// Driver Code
int main()
{

	// Given array of strings
	string s1="ABCABC";
    string s2="ABC";
	// int n = sizeof(arr)/sizeof(arr[0]);

	// Function Call
	cout << gcd(s1,s2);
}

