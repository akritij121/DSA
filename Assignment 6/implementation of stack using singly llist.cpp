/StackUsingSinglyLinkedList.cpp
#include <iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
node*createnewnode(int val){
	node*temp=new node;
	temp->data=val;
	return temp;
}
//complete functions
class stack{
	node*head;
	node*tail;
	int s;
	public:
	stack(){
		cout<<"constructor is called\n";
		tail=NULL;
		s=0;
	}
	void push(int val)
	{
		cout<<"pushing the val:"<<val<<"at the back of queue\n";
	}
	int top(){
		cout<<"returing the value at top or last\n";
		return 0;
	}
	void pop(){
		cout<<"removing the last element\n";
	}
int size(){
		cout<<"return the size of the queue\n";
		return 0;
	}
	bool isEmpty(){
		cout<<"returning if the stack is empty\n";
		return true;
	}
};
int main() {
	stack s;
	s.push(4);
cout<<"top:"<<s.top()<<"\n";
s.pop();
	cout<<"size:"<<s.size()<<"\n";
	cout<<"empty:"<<s.isEmpty()<<"\n";
	s.push(5);
	s.push(3);
	cout<<"front:"<<s.top()<<"\n";
	s.push(5);
	s.push(3);
	cout<<"front:"<<s.top()<<"\n";
	s.pop();
	cout<<"size:"<<s.size()<<"\n";
	cout<<"empty:"<<s.isEmpty()<<"\n";
	cout<<"top:"<<s.top()<<"\n";
	s.pop();
	cout<<"size:"<<s.size()<<"\n";
	cout<<"empty:"<<s.isEmpty()<<"\n";
	return 0;
}
