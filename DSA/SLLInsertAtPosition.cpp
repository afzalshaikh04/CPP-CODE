#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;

//Constructor
Node(int data){
    this ->data=data;
    this ->next=NULL;
    }
};
//Insert at tail in linked list
void insertAtTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
void print(Node* &tail){
    Node *temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
cout<<endl;
}
//Insert at any position in linked list
void insertAtPosition(Node* &head,int pos,int d){
  if(pos==1){
    insertAtTail(head,d);
    return;
}
Node* temp=head;
int cnt=1;
 while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    //inserting at last position
    if(temp->next==NULL){
        insertAtTail(head,d);
        return;
    }

    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;

    temp->next=nodeToInsert;

}

int main(){

//Create a new node
Node *node1= new Node(12);     
//cout<<node1->data<<endl;
//cout<<node1->next<<endl;

Node* head=node1;
Node* tail=node1;
print(head);

insertAtTail(tail,14);
print(head);

insertAtTail(tail,16);
print(head);

insertAtPosition(head,3,22);
print(head);

insertAtPosition(head,5,45);
print(head);

return 0;
}