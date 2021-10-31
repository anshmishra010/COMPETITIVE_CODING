/*
You are given a doubly linked list which in addition to the next and previous pointers, it could have a child pointer, which may or may not point to a separate doubly linked list. These child lists may have one or more children of their own, and so on, to produce a multilevel data structure, as shown in the example below.

Flatten the list so that all the nodes appear in a single-level, doubly linked list. You are given the head of the first level of the list.

 

Example 1:

Input: head = [1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
Output: [1,2,3,7,8,11,12,9,10,4,5,6]
*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
    Node* rec(Node* head){
        Node* curr = head, *tail = head;
        while(curr){
          Node*  child = curr->child;
            Node* next = curr->next;
            if(child){
                Node*_tail = rec(child);
                _tail->next = next;
                if(next) next->prev = _tail;
                curr->next = child;
                child->prev = curr;
                curr->child = nullptr;
                curr = tail;
            }
            else{
                curr = next;
            }
            if(curr) tail = curr;
        }
        return tail;
    }
public:
    Node* flatten(Node* head) {
        if(head){
            rec(head);
        }
        return head;
    }
};