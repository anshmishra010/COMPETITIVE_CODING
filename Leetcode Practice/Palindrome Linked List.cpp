class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int len = 0;
        ListNode* fast = head;
        ListNode* slow = head;
		
		//# to find the middle of linked list
        while(fast && fast -> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
		
		//# if length is odd
        if(fast != NULL)
        {
            slow = slow -> next;
        }

      // # reversing the second half
        ListNode* curr = slow;
        ListNode* prev = NULL;
        ListNode* next;
        while(curr)
        {
            next = curr->next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
		
		//# Comparing the 2 halves
        while(prev && head)
        {
            if(prev -> val != head -> val)
            {
                return false;
            }
            prev = prev -> next;
            head = head -> next;
        }
        
        return true;
    }
};