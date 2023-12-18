#include<iostream>
using namespace std;

//sum all number till n
int Sum (int n){
    if(n==0){
        return 0;
    }
    int prevSum=Sum(n-1);
    return n+prevSum;
}

//calculate m raised to power of p
int power(int m,int p){
    if(p==0)
    return 1;

    int prevPower=power(m,p-1);
    return m*prevPower;
}

// factorial of n using recursion 
 int factorial(int a){
   if(a==0)
    return 1;

    int prevFact=factorial(a-1);
    return a*prevFact;
    
}

//fibonacci of sth number using recursion
int fib(int s){
    if(s==0 ||s==1){
        return s;
    }
    return fib(s-1)+fib(s-2);
}
int main(){

int n;
cin>>n;
cout<<Sum(n)<<endl;

int m,p;
cin>>m>>p;
cout<<power(m,p)<<endl;  


int a;
cin>>a;
cout<<factorial(a)<<endl;

int s;
cin>>s;
cout<<fib(s)<<endl;

return 0;
}