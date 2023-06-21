//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maxDepth(string s) {
        int cd=0;
        int maxi=INT_MIN;
        for(char c:s){
            if(c=='('){
                cd++;
            }else if(c==')'){
                cd--;
            }
            maxi=max(cd,maxi);
        }
        return maxi;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        int ans = obj.maxDepth(s);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends