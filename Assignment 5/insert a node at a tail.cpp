#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node()
        {
            cin>>data;
            next = nullptr;
        }
};
void insertAtEnd(Node*& head)
{
    Node *temp;
    Node *ptr = new Node();
    if(head == nullptr)
        head = ptr;
    else{
    temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = ptr;
    }
}

void display(Node *& head)
{
    Node* temp = head;
    while (temp != nullptr) {
       cout<<temp->data<<endl;
       temp = temp->next;
    }
}

int main() {
    int n;
    cin>>n;
    Node *head;
    while (n--) {
        insertAtEnd(head);
    }
    display(head);
    return 0;
}
