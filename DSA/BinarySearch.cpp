#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    while(start<=end){
   int mid=(start+end)/2;

  if(arr[mid]==key){
    return mid;
  }
  //shift in right side of array
  else if(arr[mid]<key) {
    start=mid+1;
     }
  //shift in left side of array
     else{
        end=mid-1;
     }
   }
   return -1;
}


int main(){

int even[6]={2,6,8,10,12,14};
int odd[7]={1,5,7,9,11,13,15};

int indexEven=binarySearch(even,6,12);
int indexOdd=binarySearch(odd,7,15);

cout<<binarySearch(even,6,10)<<endl;

cout<<" Index of 12 is:"<<indexEven<<endl;
cout<<" Index of 15 is:"<<indexOdd<<endl;

return 0;
}