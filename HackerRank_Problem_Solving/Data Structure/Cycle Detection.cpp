bool has_cycle(SinglyLinkedListNode* head) {
    //using Floyds cycle dection
    if(head == nullptr) return false;
    SinglyLinkedListNode* tortoise = head;
    SinglyLinkedListNode* hare = head;
    
    while(hare != nullptr && hare->next != nullptr)
    {
        hare= hare->next->next;
        tortoise = tortoise->next;
        if(hare == tortoise) return true;
    }
    return false;
}
