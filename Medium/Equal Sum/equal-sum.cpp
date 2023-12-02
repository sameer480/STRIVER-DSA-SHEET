//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string equilibrium(int *arr, int n) {
    // Calculate the total sum of the array
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int lsum = 0; // Initialize left sum
    int rsum = totalSum - arr[0]; // Initialize right sum excluding the first element

    for (int i = 0; i < n; i++) {
        if (lsum == rsum) {
            return "YES";
        }

        // Update left and right sums for the next iteration
        lsum += arr[i];
        if (i < n - 1) {
            rsum -= arr[i + 1];
        }
    }

    return "NO";
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends