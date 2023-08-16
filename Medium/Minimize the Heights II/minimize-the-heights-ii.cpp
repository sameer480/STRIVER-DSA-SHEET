//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++



class Solution {
public:
    int getMinDiff(int arr[], int n, int k) {
        std::sort(arr, arr + n); // Step 1
        
        int ans = arr[n - 1] - arr[0]; // Step 2
        
        for (int i = 1; i < n; ++i) {
            if(arr[i]-k < 0)continue;// Step 3
            int min_height = std::min(arr[0] + k, arr[i] - k);
            int max_height = std::max(arr[n - 1] - k, arr[i - 1] + k);
            ans = std::min(ans, max_height - min_height);
        }
        
        return ans; // Step 4
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends