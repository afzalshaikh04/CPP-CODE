#include<iostream>
using namespace std;

class Node{
public:
int data;
Node  *next;

//constructor
Node(int data){
    this ->data=data;
    this ->next=NULL;
   }
};

//insertAtHead function in linked list
void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp ->next=head;
    head=temp;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

//create a new node
Node *node1= new Node(11);
//cout<<node1->data<<endl;
//cout<<node1->next<<endl;

Node* head=node1;
print(head);

insertAtHead(head,10);
print(head);

insertAtHead(head,9);
print(head);

insertAtHead(head,8);
print(head);


return 0;
}