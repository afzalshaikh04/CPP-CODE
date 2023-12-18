#include<iostream>
using namespace std;

//check if and array is sorted or not ?

bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restArray=sorted(arr+1,n-1);
    return (arr[0]<arr[1]&& restArray);
};

//print the number in increasing or decreasing order
void dec(int m){
    if (m==1){
        cout<<"1"<<endl;
        return;
    }
cout<<m<<endl;
dec(m-1);
};

int main(){

int arr[]={1,2,3,6,7};
cout<<sorted(arr,5)<<endl;

int m;
cin>>m;

dec(m);

return 0;
}