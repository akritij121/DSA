DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* temp = head;
    DoublyLinkedListNode* prev = NULL;
    DoublyLinkedListNode* cur = new DoublyLinkedListNode(data);
    while (temp) {
        if (temp->data >= data) break;
        prev = temp;
        temp = temp->next;
    }
    if (head == NULL){
        head = cur;
    } else if (temp == head) {
        cur->next = temp;
        temp->prev = cur;
        head = cur;
    } else {
        
        // DoublyLinkedListNode* prev = temp->prev;
        prev->next = cur;
        cur->prev = prev;
        cur->next = temp;
        if (temp)
            temp->prev = cur;
    }
    return head;
}
