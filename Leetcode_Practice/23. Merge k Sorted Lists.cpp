/*
You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
Merge all the linked-lists into one sorted linked-list and return it.
Example 1:

Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
*/

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
    struct compare{
        // custom comparator
        bool operator()(const ListNode* L1, const ListNode* L2){
            return L1->val > L2->val;
        }
    };
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,compare>q;
        for(auto i : lists){
            if(i) q.push(i);
        }
        
        ListNode* temp = new ListNode(0);
        ListNode* tail = temp;
        
        while(!q.empty())
        {
            tail->next = q.top();
            q.pop();
            tail = tail->next;
            
            if(tail->next != NULL) q.push(tail->next);
        }
        return temp->next;
    }
};