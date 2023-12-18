#include<iostream>
#include<string>
using namespace std;
class Stack{

    private:
    int top;
    int arr[4];

    public:
    Stack(){
        top=-1;
        for(int i=0;i<4;i++){
            arr[i]=0;
        }
    }
    //1-> Is Empty function in stack
    bool isEmpty(){
        if(top==-1)
        return true;
        else 
        return false;
    }
     //2-> Is Full function in stack
    bool isFull(){
        if(top==4)
            return true;
        else 
            return false;
    }
     //3-> Push function in stack
    void push(int data){
        if(isFull())
        {
        cout<<"Overflow"<<endl;
        }
        else
        {
        top++;
        arr[top]=data;
        }
    }
    //  4-> Pop function in stack
      int pop(){
        if (isEmpty()){
            cout<<"Underflow"<<endl;
        }
        else{
            int popValue=arr[top];
            arr[top]=0;
            top--;
            return popValue;
        }
      }

     //5-> Count function in stack
    int count()
    {
        return (top+1);
    }
     //6-> Peek function in stack
    int peek()
    {  
    int pos;
        if(isEmpty()){
            cout<<"Underflow"<<endl;
        }
        else 
        {
            return arr[pos];
        }
    }
    
     //7-> Change function in stack
    void change(int pos,int val)
    {
        arr[pos]=val;
        cout<<"Value:"<<pos<<endl;
    }
     //8-> Display function in stack
    void display()
    {
        cout<<"value are:"<<endl;
        for(int i=4;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }
};
int main(){
    Stack s1;
    int option,position,value;
    do
    {
       cout<<"Enter 0 to exit:"<<endl;
       cout<<"1 push():"<<endl; 
       cout<<"2 pop():"<<endl; 
       cout<<"3 isempty():"<<endl; 
       cout<<"4 isfull():"<<endl; 
       cout<<"5 peek():"<<endl; 
       cout<<"6 count():"<<endl;
       cout<<"7 change():"<<endl;
       cout<<"8 display():"<<endl;
          cin>>option;
          switch(option)
          {
            case 0:
            break;
        
            case 1:
               cout<<"enter an item to push in the stack"<<endl;
               cin>>value;
               s1.push(value);
            break;
            case 2:
              cout<<"enter an item to pop in the stack"<<s1.pop()<<endl;
              break;
              case 3:
              if(s1.isEmpty())
              cout<<"stack is empty"<<endl;
              else
              cout<<"stack is not full"<<endl;
              break;
              case 4:
               if(s1.isFull())
              cout<<"stack is empty"<<endl;
              else
              cout<<"stack is not full"<<endl;
              break;
              case 5:
              cout<<"Enter pos of item"<<endl;
              cin>>position;
              cout<<"value of item "<<s1.peek()<<endl;

              break;
              case 6:
              cout<<"count the funtion "<<s1.count()<<endl;
              break;
              case 7:
              cout<<"enter pos of items";
              cin>>position;
              cout<<endl;
              cout<<"enter value"<<endl;
              cin>>value;
              s1.change(position,value);
              break;
              case 8:
              cout<<"display function called"<<endl;
              s1.display();
              break;

              
          }

    } while (option!=0);
    

return 0;
}