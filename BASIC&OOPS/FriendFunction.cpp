#include<iostream>
using namespace std;

class Friends{

    private:
	int x;
	public:
   //constructor		
	Friends()
	{
		x=10;
	}
	friend class Brother; //friend class
};

class Brother{
	public:
		void display(Friends &t)
		{
			cout<<"The value of x="<<t.x<<endl;
		}
};

int main(){

	Friends obj1;
    Brother obj2;

obj2.display(obj1);

	return 0;
}
