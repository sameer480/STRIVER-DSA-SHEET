//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
    public:
  int firstNonRepeating(int arr[], int n) 
{ 
    // Complete the function
    unordered_map<int, int> map;

    // Iterate through the array to count occurrences
    for (int i = 0; i < n; i++) {
        if (map.count(arr[i]) != 0) {
            map[arr[i]]++;
        } else {
            map[arr[i]] = 1;
        }
    }

    // Iterate through the array again to find the first non-repeating element
    for (int i = 0; i < n; i++) {
        if (map[arr[i]] == 1) {
            return arr[i];
        }
    }

    // If no non-repeating element is found, you can return -1 or any other appropriate value.
    return -1;
}

  
};


//{ Driver Code Starts.

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.firstNonRepeating(arr,n)<<endl;
    }
}

// } Driver Code Ends