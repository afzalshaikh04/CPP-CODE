#include<iostream>
#include<stack>

using namespace std;
int main(){
stack<string> s;

s.push("A");
s.push("F");
s.push("Z");
s.push("A");
s.push("L");

cout<<"Top element :"<<s.top()<<endl;

cout<<"Size of stack :"<<s.size()<<endl;

s.pop();
cout<<"Top element :"<<s.top()<<endl;


cout<<"Empty or not :"<<s.empty()<<endl;



return 0;
}