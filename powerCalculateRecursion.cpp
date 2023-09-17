#include<iostream>
using namespace std;

int power(int n, int r){
    if(r==0){
        return 1;
    }
    else
    return n*power(n, r-1);
}

int main(){

    int n,r;
    cout<<"Enter the n: ";
    cin>>n;
    cout<<"Enter the r: ";
    cin>>r;

    cout<<"Calculate: "<<n<<" Power of: "<<r<< " is: "<<power(n,r);
}