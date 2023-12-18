#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* prev=NULL;
Node* next=NULL;

//constructor
  Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data:"<<value<<endl;

    }
};
//traversing a linked list  
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head ,int d){
Node* temp=new Node(d);
temp->next=head;
head->prev=temp;
head=temp;
}

void insertAtTail(Node* &tail ,int d){
Node* temp=new Node(d);
tail->next=temp;
temp->prev=tail;
tail=temp;
}


void InsertAtPosition(Node* &tail,Node* &head,int pos,int d){

//Insert at start or first node
if(pos==1){
    insertAtHead(head,d);
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
        insertAtTail(tail,d);                                                                                                                        
        return;
    }
    //create a node for d
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert=temp; 
}

void deleteNode(int pos,Node* &head ){
//deletion first or start node
if(pos==1){
    Node* temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;
    delete temp;

}
 else{
        //deleting any middle or last node
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<=pos){
           prev=curr;
           curr=curr->next;
           curr++;

        }
       curr->prev=NULL;
       prev->next=curr->next;
       curr->next=NULL;

        delete curr;

    }

}
int main(){

Node* node1=new Node(10);

Node* head=node1;
Node* tail=node1;
print(head);

insertAtHead(head,12);
print(head);

insertAtHead(head,14);
print(head);

insertAtTail(tail,20);
print(head);

InsertAtPosition(tail,head, 2,7);
print(head);

InsertAtPosition(tail,head, 1,5);
print(head);

InsertAtPosition(tail,head, 7,80);
print(head);

deleteNode(1,head);
print(head);

return 0;
}