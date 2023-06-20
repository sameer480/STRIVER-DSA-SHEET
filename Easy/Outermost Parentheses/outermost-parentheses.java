//{ Driver Code Starts
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while (t-- > 0) {

            String s;
            s = br.readLine();

            Solution obj = new Solution();
            String res = obj.removeOuter(s);

            System.out.println(res);
        }
    }
}

// } Driver Code Ends


class Solution {
    public static String removeOuter(String s) {
    Stack<Character> st = new Stack<>();
    StringBuilder sb = new StringBuilder();
    for (int i = 0; i < s.length(); i++) {
        char ch = s.charAt(i);
        if (ch == '(') {
            if (!st.isEmpty()) {
                sb.append(ch);
            }
            st.push(ch);
        } else {
            st.pop();
            if (!st.isEmpty()) {
                sb.append(ch);
            }
        }
    }
    return sb.toString();


        // code here
    }
}
