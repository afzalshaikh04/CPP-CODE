#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){

    int pivot=arr[s];
    int cnt=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }

    //place pivot at right place 
    int pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);

    int i=s;int j=e;

    while(i < pivotIndex&& j>pivotIndex){

        while(arr[i]<=pivot){
            i++;
    }

    while(arr[j]>pivot){
        j--;
    }

    if(i<pivotIndex && j>pivotIndex){
        swap(arr[i++],arr[j--]);
      }
    }
    return pivotIndex;
}

void quickSort(int arr[],int s,int e){

    //base case 
    if(s>=e){
        return ;
    }

    int p=partition(arr,s,e);

    quickSort(arr,s,p-1);

    quickSort(arr,p+1,e);
}
int main(){

int arr[7]={2,6,3,9,1,8,4};

quickSort(arr,0,6);
 
 for(int i=0;i<7;i++){
    cout<<arr[i]<<" ";
 }
 cout<<endl;
 
return 0;
}