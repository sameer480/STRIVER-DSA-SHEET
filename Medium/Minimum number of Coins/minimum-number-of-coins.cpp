//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
#include <vector>

// std::vector<int> getMinCoin(int* arr, std::vector<int>& v, int n) {
    

#include <vector>

std::vector<int> minPartition(int N) {
    int arr[] = { 2000, 500, 200, 100, 50, 20, 10, 5 ,2,1};
    std::vector<int> result;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < arrSize; i++) {
        while (N >= arr[i]) {
            N -= arr[i];
            result.push_back(arr[i]);
        }
    }
    return result;
}



};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends