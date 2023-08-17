//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
  long long trappingWater(int arr[], int n) {
    long long wtr = 0;
    long long lmax[n];
    long long rmax[n];
    lmax[0] = arr[0];
    rmax[n - 1] = arr[n - 1];
    
    for (long long i = 1; i < n; i++) {
        long long temp = lmax[i - 1];
        lmax[i] = max(temp, (long long)arr[i]);
    }
    
    for (long long i = n - 2; i >= 0; i--) {
        long long temp = rmax[i + 1];
        rmax[i] = max((long long)arr[i], temp);
    }
    
    for (long long i = 1; i < n - 1; i++) {
        wtr += min(rmax[i], lmax[i]) - arr[i];
    }
    
    return wtr;


        // code here
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends