/*
Given the head of a singly linked list, sort the list using insertion sort, and return the sorted list's head.
*/

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* start = new ListNode();
        start->next = head;
        ListNode* curr = head, *prev = start;
        
        while(curr != nullptr)
        {
            // this means we have found a bigger number than curr and we have to adjust it in left side
            if(curr->next != nullptr and (curr->next->val < curr->val))
            {
                // we making prev forward and pointing just before the curr and place where we have to insert
                while(prev->next != nullptr and (prev->next->val < curr->next->val)) prev = prev->next;
                
                
                // at this point we have to insert the curr->next element between prev and curr
                // now we will swapping the values
                ListNode* temp = prev->next;
                prev->next = curr->next;
                curr->next = curr->next->next;
                prev->next->next = temp;
                
                //after swapping we have to move back the prev to start so that whenver next unusual number occur we again start from begining (property of insertion sort)
                prev = start;
                
                
            }
            else{
                // if everything is fine then just continue moving.
                curr = curr->next;
            }
        }
        return start->next;
    }
};