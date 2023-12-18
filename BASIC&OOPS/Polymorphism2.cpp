#include<iostream>
using namespace std;

// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound "<<endl;
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says:wee wee "<<endl;
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says:bow wow"<<endl;
    }
};

int main(){

  Animal obj1;
  Pig obj2;
  Dog obj3;

obj1.animalSound();
obj2.animalSound();
obj3.animalSound();

  return 0;
}