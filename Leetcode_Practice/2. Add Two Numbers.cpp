/*
You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit.
 Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
Example 1:

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
*/


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        ListNode* new_head = l3;
        int carry=0;
        
        while(l1 and l2)
        {
            int total = l1->val + l2->val + carry;
            carry = total/10;
            l3->next = new ListNode(total%10); // we only have to add last digit
            l3=l3->next;
            l1 = l1->next;
            l2= l2->next;
        }
        while(l1)
        {
            int total = l1->val+carry;
            carry = total/10;
            l3->next = new ListNode(total%10);
            l3=l3->next;
            l1 = l1->next;
        }
        while(l2)
        {
            int total = l2->val+carry;
            carry = total/10;
            l3->next = new ListNode(total%10);
            l3=l3->next;
            l2=l2->next;
        }
        if(carry) l3->next = new ListNode(carry);
        return new_head->next;
    }
};