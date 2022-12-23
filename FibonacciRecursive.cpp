#include <iostream>
using namespace std;

int funFibonacci(int n){
   if(n<2){
    return 1;
   }
   else{
    return funFibonacci(n-1) +funFibonacci(n-2);
   }
}

int main()
{
    int n=0,i=0;
    cout<<"Enter the number of terms you want in the fibonacci sequence";
    cin>>n;

    while(i<n)
    {
      cout<<funFibonacci(i)<<endl;
        i++;
    }
    return 0;
       
}
