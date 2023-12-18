#include<iostream>
using namespace std;
class Student{
    private:
    int height;
    int age;
    public:
    int getAge(){
        return this->age;
    }
     int setAge(int h){
        cout<<this<<endl;
        this->age=age;
       // return this->age;
    }
};

int main(){

Student h1;
cout<<h1.getAge()<<endl;
cout<<h1.setAge(10)<<endl;

return 0;
}