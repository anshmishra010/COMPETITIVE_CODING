class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        //first approach , in this we will use hashmap logic , we will traverse through ll b and store it in hashmap and then check those value in ll a , if found we'll return .
        //but we have to compromise in space complexity
        
        // set<ListNode*> nb;
        // //storing the ADDRESS
        // while(headB != NULL){
        //     nb.insert(headB);
        //     headB=  headB->next;
        // }
        // while(headA != NULL){
        //     if(nb.find(headA) != nb.end()){
        //         return headA;
        //     }
        //     headA = headA->next;
        // }
        // return NULL;
        
        //---------------------------------------------------------------------
        
        // another approach using 2 pointer
        //in this space complexity will improve
        // we will put one pointer (pA) to shotest length of the node and (pb) at another ll at (m - n) distance
        
        ListNode* pA = headA;
        ListNode* pB = headB;
        
        while(pA!=pB)
        {
            pA= pA == NULL ? headB : pA->next;
            pB = pB == NULL ? headA : pB->next;
        }
        return pB;
        
    }
};