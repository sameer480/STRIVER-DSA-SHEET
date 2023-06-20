//{ Driver Code Starts
import java.io.*;
import java.util.*;
class Node
{
    int data;
    Node next;
    
    Node(int x)
    {
        data = x;
        next = null;
    }
}
class GfG
{
    public static void printList(Node node) 
    { 
        while (node != null)
        { 
            System.out.print(node.data);
            node = node.next; 
        }  
        System.out.println();
    } 
    public static void main(String args[])throws IOException
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    String s = sc.next();
                    Node head = new Node( s.charAt(0) - '0' );
                    Node tail = head;
                    for(int i=1; i<s.length(); i++)
                    {
                        tail.next = new Node( s.charAt(i) - '0' );
                        tail = tail.next;
                    }
                    Solution obj = new Solution();
                    head = obj.addOne(head);
                    printList(head); 
                }
        }
}
// } Driver Code Ends


/*
class Node{
    int data;
    Node next;
    
    Node(int x){
        data = x;
        next = null;
    }
} 
*/

class Solution {
    static int carry = 0;
    static Node nh = null;
    static Node nt = null;

    static Node addOne(Node head) {
        if (head == null) {
            return null;
        }
        Node rev = reverse(head);
        int sum = rev.data + 1;
        carry = sum / 10;
        sum = sum % 10;
        Node nn = new Node(sum);
        nh = nt = nn;
        rev = rev.next;
        while (rev != null) {
            sum = rev.data + carry;
            carry = sum / 10;
            sum = sum % 10;
            nn = new Node(sum);
            nt.next = nn;
            nt = nn;
            rev = rev.next;
        }
        if (carry > 0) {
            nn = new Node(carry);
            nt.next = nn;
            nt = nn;
        }
        Node newHead = reverse(nh);
        return newHead;
    }

    static Node reverse(Node head) {
        Node cur = head;
        Node prev = null;
        Node temp = null;
        while (cur != null) {
            temp = cur.next;
            cur.next = prev;
            prev = cur;
            cur = temp;
        }
        return prev;
    }
}
