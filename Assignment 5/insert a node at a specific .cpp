SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* temp=llist;
    SinglyLinkedListNode* newnode=new SinglyLinkedListNode(data);
    
    int count=1;
    while(temp!=NULL){
        if(count==position){
            SinglyLinkedListNode* curr=temp->next;
            temp->next=newnode;
            newnode->next=curr;
        }
        count++;
        temp=temp->next;
    }
    return llist;
}
