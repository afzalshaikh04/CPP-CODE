#include<iostream>
#include<queue>
using namespace std;
int main(){

    deque<int>d;

    d.push_front(12);
    d.push_back(14);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
d.pop_front();

cout<<d.front()<<endl;
cout<<d.back()<<endl;
d.pop_back();

if(d.empty()){
    cout<<"queue is empty"<<endl;
}
else{
    cout<<"queue is not empty"<<endl;
}
return 0;
}

/*#include<iostream>
#include<queue>
using namespace std;
int main(){
    
queue<int> q;
q.push(11);
cout<<"Front of queue:"<<q.front()<<endl;
q.push(23);
q.push(4);
cout<<"Size of queue is:"<<q.size()<<endl;
q.pop();
cout<<"Size of queue is:"<<q.size()<<endl;

if(q.empty()){
    cout<<"Queue is empty"<<endl;
}
else {
   cout<<"Queue is not empty"<<endl; 
}

return 0;
}*/