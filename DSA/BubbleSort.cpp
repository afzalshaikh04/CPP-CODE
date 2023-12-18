#include<iostream>
using namespace std;

void bubbleSort(int arr[]){
    for(int i=1;i<5;i++){
    for(int j=0;j<5-i;j++){
      if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    }
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

bubbleSort(arr);

cout<<"After sorting:"<<endl;
for(int i=0;i<5;i++){
  cout<<arr[i]<<" ";
}

return 0;
}