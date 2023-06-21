//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    #include <string>
#include <cctype>

int atoi(std::string str) {
    int result = 0;
    bool isNegative = false;
    int i = 0;
    
    if (str[i] == '-') {
        isNegative = true;
        i++;
    }
    
    for (; i < str.length(); i++) {
        char ch = str[i];
        
        if (!isdigit(ch)) {
            return -1;  // Invalid input
        } else {
            int digit = ch - '0';
            result = result * 10 + digit;
        }
    }
    
    return (isNegative ? -result : result);
}

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends