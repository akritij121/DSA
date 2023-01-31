void printLinkedList(SinglyLinkedListNode* head) {
    const auto *p = head;
    while (&(p->data)!=nullptr) {
            cout<<p->data<<endl;
            p=p->next;
    }
}
