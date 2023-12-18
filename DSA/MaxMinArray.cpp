#include<iostream>
using namespace std;

int getMax(int arr[],int n){

   int  maxi=INT32_MIN;
   
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
       // if(arr[i]>maxi){
       // maxi=arr[i];

    }
    return maxi;
}

int getMin(int arr[],int n){

   int  mini=INT32_MAX;
   
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);

       // if(arr[i]<mini){
       // mini=arr[i];

    }
    return mini;
}
int main(){

int n;
cin>>n;

int arr[n];

for(int i=0;i<n;i++){
   cin>>arr[i];
}
cout<<"Maximum value is:"<<getMax(arr,n)<<endl;

cout<<"Minimum value is:"<<getMin(arr,n)<<endl;

return 0;
}