#include<iostream>
#include<vector>

using namespace std;
int main(){

vector<int> v;

vector<int> a(5,1);
vector<int>last(a);

cout<<"print last:";
for(int i:last){
    cout<<i<<" ";
}
cout<<endl;

cout<<"capacity: "<<v.capacity()<<endl;

v.push_back(1);
cout<<"capacity: "<<v.capacity()<<endl;

v.push_back(2);
cout<<"capacity: "<<v.capacity()<<endl;

v.push_back(3);
cout<<"capacity: "<<v.capacity()<<endl;
cout<<"size: "<<v.size()<<endl;

cout<<"Element at 2nd Index:"<<v.at(2)<<endl;

cout<<"First element :"<<v.front()<<endl;
cout<<"Last element :"<<v.back()<<endl;


return 0;
}