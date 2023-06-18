//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        vector<int>v;
        int top=0,bottom=n-1,left=0,right=m-1;
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                v.push_back(a[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                v.push_back(a[i][right]);
            }
            right--;
            for(int i=right;i>=left;i--){
                v.push_back(a[bottom][i]);
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                v.push_back(a[i][left]);
            }
            left++;
        }
        return v[k-1];
        // Your code goes here
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends