#include<iostream>
using namespace std;

//function overloading 
class overloading{
public:
void Pro(int a,int b){
  cout<<(a+b)<<endl;
}

  void Pro(int a,int b,int c){
  cout<<(a+b+c)<<endl;
  }
};

//function overriding 
class parent{

public:
 void print(){
  cout<<"Parent class"<<endl;
 }
};

class child:public parent{
  public:
 void print(){
  cout<<"Child class"<<endl;
 }
};

//virtual function
class base{
  public:
  virtual void display(){
cout<<"Base class"<<endl;
  }
};

class derived:public base{
  public:
  void display(){
cout<<"Derived class"<<endl;
  }

};

int main(){

//function overloading
 overloading obj;
 obj.Pro(10,20);
 obj.Pro(1,2,3);

//function overriding
child obj1;
obj1.print();

parent obj2;
obj2.print();

//virtual function
base *b;
derived d;
b=&d;
b->display();

return 0;
}