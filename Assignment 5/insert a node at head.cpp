SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);    
    if(llist != nullptr) {
        node->next = llist;
    }
    return node;
}
