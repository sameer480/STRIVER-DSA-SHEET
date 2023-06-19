//{ Driver Code Starts
/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

class Node {
    int data;
    Node next;
    
    public Node (int data){
        this.data = data;
        this.next = null;
    }
}

class GFG {
    static void printList(Node node) 
	{ 
		while (node != null) 
		{ 
			System.out.print(node.data + " "); 
			node = node.next; 
		} 
		System.out.println(); 
	}
	public static void main (String[] args) {
		Scanner sc  = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0){
		    int n = sc.nextInt();
		    
		    Node head = new Node(sc.nextInt());
		    Node tail = head;
		    
		    for(int i=1; i<n; i++){
		        tail.next = new Node(sc.nextInt());
		        tail = tail.next;
		    }
		    Solution obj = new Solution();
		    head = obj.sort(head);
		    printList(head);
		}
	}
}

// } Driver Code Ends


/*
Structure of node class is:

class Node {
    int data;
    Node next;
    
    public Node (int data){
        this.data = data;
        this.next = null;
    }
}
*/
class Solution {
    
   public Node sort(Node head){
      ArrayList<Integer> arr = new ArrayList<>();
Node temp = head;
while (temp != null) {
    arr.add(temp.data);
    temp = temp.next;
}

Collections.sort(arr);

Node newHead = null;
Node tail = null;

for (int i = 0; i < arr.size(); i++) {
    Node newNode = new Node(arr.get(i));
    if (newHead == null) {
        newHead = newNode;
        tail = newNode;
    } else {
        tail.next = newNode;
        // newNode.prev = tail;
        tail = newNode;
    }
}

return newHead;
        //your code here, return the head of the sorted list
   }


}