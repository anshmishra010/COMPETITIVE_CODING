/*
Given two linked lists, your task is to complete the function makeUnion(), that returns the union of two linked lists. This union should include all the distinct elements only.

Example 1:

Input:
L1 = 9->6->4->2->3->8
L2 = 1->2->8->6->2
Output: 1 2 3 4 6 8 9
*/


struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    // we will be using set as we have to take unique value
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* temp3 = new Node(0);
    Node* temp4 = temp3;
    
    set<int> res;

    // inserting value of first list
    while(temp1){
        res.insert(temp1->data);
        temp1= temp1->next;
    }

    // inserting value of second list
    while(temp2){
        res.insert(temp2->data);
        temp2 = temp2->next;
    }
    
    // iterating through the set and make the new linked list
    for(auto it = res.begin();it != res.end() ;it++){
        temp3->next = new Node(*it);
        temp3= temp3->next;
    }
    //return from the head
    return temp4->next;
}

