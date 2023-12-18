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
int main(){
Lion a;
a.speak();
a.king();

return 0;
}