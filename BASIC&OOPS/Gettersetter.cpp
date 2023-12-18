#include<iostream>
using namespace std;

class Students{
private:
int Health;

public:
//getter
int getHealth(){
    return Health;
}
//setter
void setHealth(int h){
  this->Health=Health;
  }
};

int main(){

//create an object
Students obj;

obj.setHealth(95);
cout<<obj.getHealth()<<endl;

cout<<sizeof(obj)<<endl;


return 0;
}