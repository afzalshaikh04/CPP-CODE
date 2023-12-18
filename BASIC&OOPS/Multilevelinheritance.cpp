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
class Lion:public Animal{
public:
void king(){
    cout<<"roaring"<<endl;
}
};
class BabyLion:public Lion{
public:
void prince(){
    cout<<"prince of jungle"<<endl;
}
};
int main(){
Lion a;
BabyLion c;
c.prince();
a.speak();
a.king();

return 0;
}