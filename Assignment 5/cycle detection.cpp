bool has_cycle(SinglyLinkedListNode* head) {

    if (head==NULL) return 0;
    
    SinglyLinkedListNode* keep = head;
    SinglyLinkedListNode* temp;
    
    while(head->next!=NULL)
    {
        head=head->next;
        temp=keep;
        
        while(temp!=head){
           if(head->next==temp)return 1; 
           temp=temp->next;
        }
        
    }
    
    return 0;
      
}
