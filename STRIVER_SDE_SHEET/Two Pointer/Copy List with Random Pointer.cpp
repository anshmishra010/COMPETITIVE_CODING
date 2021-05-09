/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node* iter = head;
        Node* front = head;
        
        //firstly we will make a copy of an original node
        while(iter != NULL){
            // moving front one step ahead
            front = iter->next;
            //making copy
            Node* copy = new Node(iter->val);
            //linking
            iter->next = copy;
            copy->next = front;
            
            iter = front;
            
        }
        
        //now linking random ptr
        iter = head;
        while(iter != NULL){
            if(iter->random != NULL){
                iter->next->random = iter->random->next;
                
            }
            //jumping above the copy node
            iter = iter->next->next;
        }
        
        //now rechanging the link
        iter = head;
        Node* ph = new Node(0);
        Node* copy = ph;
        while(iter != NULL){
            front= iter->next->next;
            copy->next = iter->next;
            iter->next = front;
            
            //increamenting
            copy = copy->next;
            iter = front;
            
        }
        return ph->next;
        
    }
};

//brute force 
/*
We will take a hashmap , where we store the <Node,Node> original data and copy data , and in first traversal we make a hashmap and in second traversal we will point to random poiner .
Tc  - O(N) Space - O(N)
*/

// optimal approach
/*
We will a same node of the orignal node and  then we will link that new copy node to the random pointer and then we will change the link 

TC - O(n) Space - O(1)
*/