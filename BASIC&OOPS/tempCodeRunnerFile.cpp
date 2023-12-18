int factorial(int a){
   if(a==0)
    return 1;

    int prevFact=factorial(a-1);
    return a*prevFact;
    
}