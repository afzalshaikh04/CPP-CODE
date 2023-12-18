#include<iostream>
using namespace std;
class Animal{
public:
void speak(){
    cout<<"speaking"<<endl;
}
};
class Lion{
public:
void speak(){
    cout<<"roaring"<<endl;
    }
};
class BabyLion:public Animal,public Lion{

};

int main(){
BabyLion obj;
obj.Lion::speak();
obj.Animal::speak();

return 0;
}