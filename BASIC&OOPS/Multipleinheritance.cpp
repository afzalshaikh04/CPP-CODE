#include<iostream>
using namespace std;
class Animal{
public:
int height;
int weight;

void speak(){
    cout<<"speaking"<<endl;
  }
};
class Lion{
public:
void king(){
    cout<<"king of jungle"<<endl;
  }
};
class BabyLion:public Lion,public Animal{
public:
void prince(){
    cout<<"roaring"<<endl;
   }
};
int main(){

BabyLion s;
s.speak();
s.king();
cout<<s.height;

return 0;
}