#include<iostream>
using namespace std;

void selectionSort(int arr[]){
int j=0;
int key=0;

for(int i=0;i<5;i++){
  key=arr[i];
  j=i-1;
  while(j>=0&& arr[j]>key)
  {
    arr[j+1]=arr[j];
    j=j-1;
  }
  arr[j+1]=key;
  }
}

int main(){

int arr[5];
cout<<"Enter any integers in any order:"<<endl;

for(int i=0;i<5;i++){
  cin>>arr[i];
}
cout<<"Before sorting:"<<endl;
for(int i=0;i<5;i++){
  cout<<arr[i]<<" ";
     }
cout<<endl;

selectionSort(arr);

cout<<"After sorting:"<<endl;
for(int i=0;i<5;i++){
  cout<<arr[i]<<" ";
}

return 0;
}