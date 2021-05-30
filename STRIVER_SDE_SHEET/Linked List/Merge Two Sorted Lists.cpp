//https://leetcode.com/problems/merge-two-sorted-lists/



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        // usimg recursion
        
//         if(l1 == NULL){
//             return l2;
//         }
//         if(l2 == NULL){
//             return l1;
//         }
        
//         ListNode* res;
//         if(l1->val < l2->val){
//             res = l1;
//             res->next = mergeTwoLists(l1->next, l2);
//         }
//         else{
//             res = l2;
//             res->next = mergeTwoLists(l1,l2->next);
//         }
//         return res;
        
        
        // iterative value
        ListNode dum(0);
        ListNode* tail = &dum;
        
        while(l1 and l2)
        {
            if(l1->val < l2->val)
            {
                tail->next = l1;
                l1 = l1->next;
            }
            else
            {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }
        if(l1)
        {
            tail->next = l1;
        }
        else
        {
            tail->next = l2;
        }
        return dum.next;
    }
};