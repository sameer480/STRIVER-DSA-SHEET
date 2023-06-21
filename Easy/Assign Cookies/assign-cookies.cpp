//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxChildren(int N, int M, vector<int> &g, vector<int> &s) {
        sort(g.rbegin(),g.rend());
        sort(s.rbegin(),s.rend());
       int curr = 0;
    int total = 0;
    int n = g.size();
    int m = s.size();
    
    for (int i = 0; i < n && curr < m; i++) {
        if (g[i] <= s[curr]) {
            curr++;
            total++;
        }
    }
    return total;
    
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;

        vector<int> greed(N), sz(M);
        for (int i = 0; i < N; i++) {
            cin >> greed[i];
        }
        for (int i = 0; i < M; i++) {
            cin >> sz[i];
        }
        Solution obj;
        cout << obj.maxChildren(N, M, greed, sz) << endl;
    }
    return 0;
}
// } Driver Code Ends