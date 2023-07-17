//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
void subsetsum(int si,vector<int>&arr,vector<int>&v,int n,int sum){
    if(si==n){
        v.push_back(sum);
        return;
    }
    subsetsum(si+1,arr,v,n,sum+arr[si]);
    subsetsum(si+1,arr,v,n,sum);
    
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> v;
        subsetsum(0,arr,v,N,0);
        sort(v.begin(),v.end());
        return v;
        
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends