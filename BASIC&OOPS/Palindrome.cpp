#include<iostream>
using namespace std;

bool palindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
     if(a[s]!=a[e]){
     return 0;
     }
     else{
       s++;
      e--;
      }
    }
    return 1;
  }

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
     swap(name[s++],name[e--]);
    }
}

int getLength(char name[]){
    int cnt=0;
    for(int i=0;name[i]!='\0';i++){
        cnt++;
    }
    return cnt;
}

int main(){

char name[20];

cout<<"enter your name:";
cin>>name;

int len=getLength(name);
cout<<"length:"<<len<<endl;

reverse(name,len);
cout<<"reverse name:";
cout<<name<<endl;

cout<<"Palindrome or not:"<<palindrome(name,len)<<endl;



return 0;
}