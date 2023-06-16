//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        int z=m+n;
        vector<int>fu;
        for(int i=0;i<n;i++){
            fu.push_back(arr1[i]);
        }
        for(int j=0;j<m;j++){
            fu.push_back(arr2[j]);
        }
        sort(fu.begin(),fu.end());
        vector<int> unionArr;
        for(int i = 0; i < z; i++) {
            if(i == 0 || fu[i] != fu[i-1]) {
                unionArr.push_back(fu[i]);
            }
        }
        
        return unionArr;
        //Your code here
        //return vector with correct order of elements
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends