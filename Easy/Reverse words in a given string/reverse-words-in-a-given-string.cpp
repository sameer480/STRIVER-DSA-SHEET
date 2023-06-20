//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:

string reverseWords(string str) {
  stack<string> words;
  int n = str.length();
  
  // Iterate through the string, adding each word to the stack.
  for (int i = 0; i < n; i++) {
    if (str[i] != '.') {
      string word = "";
      while (i < n && str[i] != '.') {
        word += str[i];
        i++;
      }
      words.push(word);
    }
  }
  
  // Pop the words off the stack in reverse order and concatenate them together to form the reversed string.
  string reversed_string = "";
  while (!words.empty()) {
    reversed_string += words.top();
    words.pop();
    if (!words.empty()) {
      reversed_string += ".";
    }
  }
  
  return reversed_string;
}









};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends