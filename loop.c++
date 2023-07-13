#include<iostream>
using namespace std;

int main()
{
    // int n ;
    // cout<<"Enter the value: ";
    // cin>>n;
    // //for(int i=1; i<=n; i++)
    // int i=1, sum=0;
    // while(i<=n){
    // cout<<i<<" ";
    // sum = sum+i;
    // i=i+1;
    // }
    // cout << '\n' << "The value of sum is: "<< sum <<endl;

    int n;
    cout<<"Enter the value to check prime or not: ";
    cin>>n;
    int i=2;
   // for(i=2; i<=n; i++)
    while(i<=n)
    {
    if(n%i==0)
    cout<<"Not a prime number " << i << endl;
    else
    cout<<"Number is prime number " << i << endl;

    i++;
    }
    
}