#include<bits/stdc++.h>
using namespace std;

bool armstrong(int n){
    int temp =n;
    int count =0;
    int x = n;
     while(x!=0){
        count++;
        x/=10;
     }

    int sum =0;
    while(n!=0){
        int rem = n%10;
        sum += pow(rem, count);
        n/=10;
    }
    return (sum ==temp);
}


int main(){
    int n1;
    cout<<"Enter the number: ";
    cin>>n1;
    if(armstrong(n1))
    {
        cout<<"Armstrong number ";
    }
    else
    {
        cout<<"Not armstrong ";
    }

return 0;
}