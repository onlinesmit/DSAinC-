#include<iostream>
using namespace std;

int calcGCD(int n, int m){
    // Write your code here.

    while((n!=0) && (m!=0) ){
    if(n>=m){
        n=n-m;
    }
    else
        m = m-n;
    }
    
    if(n==0)
    return m;
    if(m==0)
    return n;
}

int main(){
    cout<<calcGCD(5,6);

    return 0;
}