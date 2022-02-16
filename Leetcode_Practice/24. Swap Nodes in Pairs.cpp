/*
Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without 
modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)
*/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;  
        
        while(curr !=nullptr and curr->next != nullptr)
        {
            prev->next = curr->next;
            curr->next = curr->next->next;
            prev->next->next= curr;
            curr=curr->next;
            prev=prev->next->next;
        }
        return dummy->next;
        
    }
};