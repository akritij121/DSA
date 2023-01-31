SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
      int count=0;
      if(llist==NULL){
          return NULL;
      }
      if(position==0){
          return llist->next;
      }
      SinglyLinkedListNode* temp=llist;
      SinglyLinkedListNode* prev=NULL;
      while (temp!=NULL) {
          if(count==position){
              prev->next=temp->next;
              delete temp;
          }
          count++;
          prev=temp;
          temp=temp->next;
      }
      return llist;
}
