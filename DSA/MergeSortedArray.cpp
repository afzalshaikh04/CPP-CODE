#include<iostream>
using namespace std;

void merge(int a1[],int a2[],int n,int m){
    int i=n-1;
    int j=0;

    while(i>=0 && j<m){
        if(a1[i]>a2[j]){
        swap(a1[i],a2[j]);
        i--;
        j++;
        } 
       // sort(a1,a1+n);
       // sort(a2,a2+m); 
    }
}
int main(){
    
 int a1[5]={1,2,3,4,5};
 int a2[4]={6,7,8,9};


return 0;
}