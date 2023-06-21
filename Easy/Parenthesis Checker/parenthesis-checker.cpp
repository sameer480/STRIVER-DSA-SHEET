//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    #include <stack>
#include <string>

bool ispar(std::string x)
{
    std::stack<char> s;
    for (char ch : x) {
        if (ch == '(' || ch == '[' || ch == '{') {
            s.push(ch);
        } else {
            if (s.empty()) {
                return false; // Unmatched closing bracket, return false
            }
            if ((ch == ')' && s.top() == '(') || (ch == ']' && s.top() == '[') || (ch == '}' && s.top() == '{')) {
                s.pop();
            } else {
                return false; // Mismatched opening and closing brackets, return false
            }
        }
    }
    return s.empty(); // If stack is empty, all brackets are matched
}

        // Your code here
    

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends