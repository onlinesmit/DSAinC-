#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the decimal number: ";
    cin>>n;

    int rem, sum=0;
    //int i=1;
    int power = 1;
    while(n>0){
        rem = n%2;
        sum = sum +rem*power;
        power = power*10;
        n=n/2;

        //sum = sum + pow(rem, i);
        //i++;
    }
    cout<<"The binary number is: " << sum;
}