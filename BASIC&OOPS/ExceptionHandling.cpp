#include<iostream>
using namespace std;
int main(){

int r;
cin>>r;
try{
    if(r<=0){
        throw r;
    }
    else{
        cout<<3.14*r*r<<endl;
    }
}
catch(int r){
    cout<<"Enter Valid Number"<<endl;
}

return 0;
}