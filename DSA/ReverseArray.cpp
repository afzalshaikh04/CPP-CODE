#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int printArray(int arr[],int n){
for(int i=0;i<n;i++){
 cout<<arr[i]<<" ";
   }
cout<<endl;
}

int main(){
 
int arr[6]={2,4,6,8,10,12};
int brr[5]={1,3,5,7,9};

reverse(arr,6);
printArray(arr,6);

 
reverse(brr,5);
printArray(brr,5);

return 0;
}