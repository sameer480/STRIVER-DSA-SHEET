//{ Driver Code Starts
//Initial Template for Java



import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine().trim());
        while (tc-- > 0) {
            String[] inputLine;
            int n = Integer.parseInt(br.readLine().trim());
            int[] arr = new int[n];
            inputLine = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            new Solution().rearrange(arr, n);
            for (int i = 0; i < n; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println();
        }
    }
}

// } Driver Code Ends


//User function Template for Java









class Solution {
    void rearrange(int arr[], int n) {
    ArrayList<Integer> positive = new ArrayList<>();
    ArrayList<Integer> negative = new ArrayList<>();

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            positive.add(arr[i]);
        } else {
            negative.add(arr[i]);
        }
    }

    int neg = 0, pos = 0, k = 0;
    while (pos < positive.size() && neg < negative.size() && k < n) {
        if (k % 2 == 0) {
            arr[k++] = positive.get(pos++);
        } else {
            arr[k++] = negative.get(neg++);
        }
    }

    while (pos < positive.size()) {
        arr[k++] = positive.get(pos++);
    }

    while (neg < negative.size()) {
        arr[k++] = negative.get(neg++);
    }
}



    
}    




