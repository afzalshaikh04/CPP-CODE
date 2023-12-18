#include<iostream>
using namespace std;
class Hero{
public:
int health;
char level;
void print(){
    cout<<level<<endl;
  }
};

int main(){

Hero obj;
obj.health=70;
obj.level='C';

cout<<obj.health<<endl;
cout<<obj.level<<endl;

return 0;
}