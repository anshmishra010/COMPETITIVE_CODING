void deleteAlt(struct Node *head){
    // Code here
    Node* temp = head;
    Node* node = head->next;
    
    while(temp!=NULL && node!=NULL){
        temp->next = node->next;
        free(node);
        temp = temp->next;
        if(temp!=NULL){
            node = temp->next;
        }
    }
    
}