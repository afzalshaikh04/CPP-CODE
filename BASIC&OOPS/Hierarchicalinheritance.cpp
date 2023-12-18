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
    cout<<"king of jungle"<<endl;
   }
};

class Tiger:public Animal{
public:
void active(){
    cout<<"running 60km/h"<<endl;
   }
};

int main(){
    
Lion a;
Tiger b;
a.speak();
a.king();

b.active();
b.speak();

return 0;
}