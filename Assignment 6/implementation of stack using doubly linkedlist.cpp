void push(int d)
{
    struct Node* n;
    n = new Node();
    n->data = d;
    if (isEmpty()) {
        n->prev = NULL;
        n->next = NULL;
 
        // As it is first node
        // if stack is empty
        start = n;
        top = n;
    }
    else {
        top->next = n;
        n->next = NULL;
        n->prev = top;
        top = n;
    }
}
