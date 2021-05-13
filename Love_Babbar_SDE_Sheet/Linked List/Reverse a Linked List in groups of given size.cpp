/*
Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list.

Example 1:

Input:
LinkedList: 1->2->2->4->5->6->7->8
K = 4
Output: 4 2 2 1 8 7 6 5 
Explanation: 
The first 4 elements 1,2,2,4 are reversed first 
and then the next 4 elements 5,6,7,8. Hence, the 
resultant linked list is 4->2->2->1->8->7->6->5.

NOTE : IT's different from leetcode one
*/

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node* cur = head;
        node* prev = NULL;
        node* nex = NULL;
        int c =0;
        
        while(cur != NULL && c<k)
        {
            nex = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nex;
            c++;
        }
        if(nex != NULL){
            head->next = reverse(nex,k);
        }
        return prev;
    }
};