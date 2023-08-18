//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
    vector<int> v;
    
    // Use a min-heap (priority queue) to keep the k largest elements
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for (int i = 0; i < k; i++) {
        pq.push(arr[i]);
    }
    
    for (int i = k; i < n; i++) {
        if (pq.top() < arr[i]) {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    
    // Transfer elements from priority queue to vector
    while (!pq.empty()) {
        v.push_back(pq.top());
        pq.pop();
    }
    
    // Sorting the array in decreasing order using sort
    sort(v.begin(), v.end(), greater<int>());
    
    return v;
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends