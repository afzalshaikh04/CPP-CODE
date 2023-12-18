#include<iostream>
using namespace std;

class Node{

public:
int data;
Node* next;

//constructor
Node(int data){
    this ->data=data;
    this ->next=NULL;
    }
};

//insertAtTail function in linked list
void insertAtTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void print(Node* &tail){
    Node *temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
cout<<endl;
}

int main(){

//create a new node
Node* node1= new Node(12);     
//cout<<node1->data<<endl;
//cout<<node1->next<<endl;

Node* head=node1;
Node* tail=node1;
print(head);

insertAtTail(tail,14);
print(head);

insertAtTail(tail,16);
print(head);

return 0;
}