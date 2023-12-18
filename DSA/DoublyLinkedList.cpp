#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //Constructor
     Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
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
//Gives length of linked list 
int getLength(Node* head){
    int len=0;
      Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
}
return len;
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

//Insert at start 
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

int main(){
Node* node1=new Node(10);

Node* head=node1;
Node* tail=node1;
print(head);

//cout<<getLength(head)<<endl;

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

return 0;
}