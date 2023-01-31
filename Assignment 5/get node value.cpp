int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    
    vector<int> arr;
    while (llist!=nullptr) {
     arr.push_back(llist->data);
     llist=llist->next;
  }
  int pos = arr.size()-positionFromTail;
    return arr[pos-1];
}
