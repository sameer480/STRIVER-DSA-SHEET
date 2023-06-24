//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// User function Template for C++

class Solution {
  public:
  int fund(int N){
           if(N%4==0) return N;
        if((N-1)%4==0) return 1;
        if((N-3)%4==0) return 0;
        if((N-2)%4==0) return N+1;
    }
    int findXOR(int l, int r) {
        // complete the function here
         return (fund(r)^fund(l-1));
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        // Input

        int l, r;
        cin >> l >> r;

        Solution obj;
        cout << obj.findXOR(l, r) << endl;
    }
}
// } Driver Code Ends