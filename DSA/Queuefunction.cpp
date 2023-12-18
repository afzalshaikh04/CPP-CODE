#include<iostream>
#include<queue>
using namespace std;
class Queue{
    int *arr;
    int qfront;
    int rear;
    int size;
    public:
    Queue(){
        size=100001;
        arr=new int[size];
        qfront=0;
        rear=0;
    }
    //---------------public function of queue----------------

    //1-> Empty function in queue

    bool isEmpty(){
        if(qfront==rear){
            return true;
        }
        else 
        return false;
    }
    //2-> Enqueue function in queue

    void enqueue(int data){
        if(rear==size)
             cout<<"Full:"<<endl;
             else {
             arr[rear]=data;
             rear++;
             }
    }
//3-> Dequeue function in queue

    int dequeue(){
        if(qfront==rear){
            return -1;
        }
        else { 
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear)
            {
                qfront=0;
                 rear=0;
            }
            return ans;
        }
    }
    //4-> front function in queue
    int front(){
        if(qfront==rear){
            return -1;
        }
        else{
            arr[qfront];
        }
    }
};
int main(){
Queue obj;

cout<<obj.isEmpty()<<endl;
cout<<obj.dequeue()<<endl;
cout<<obj.front()<<endl;

return 0;
}