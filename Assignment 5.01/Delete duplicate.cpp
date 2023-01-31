SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode * temp = llist;
    if(temp == nullptr)
    {
        return temp;
    }
    while (temp->next !=nullptr) {
     if(temp->data == temp->next->data)
     {
         SinglyLinkedListNode *next = temp->next;
         temp->next = temp->next->next;
         delete next;
     } 
     else{  
     temp = temp->next;
     }
    }
    return llist;
}
