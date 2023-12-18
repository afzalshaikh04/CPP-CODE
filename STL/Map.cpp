#include<iostream>
#include<map>
using namespace std;
int main(){

map<int,string> m;

m[1]="A";
m[2]="F";
m[5]="L";
m[4]="A";

m.insert({3,"Z"});

cout<<"before erase"<<endl;

for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

cout<<"searching: "<<m.count(5)<<endl;

m.erase(5);
cout<<"after erase"<<endl;
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

return 0;
}