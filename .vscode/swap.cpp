#include<iostream>
using namespace std;

int swap(int& n, int& r){ //pass by reference by use of &
    int temp = n;
    n=r;
    r= temp;
}
 

int main(){

    int n, r;
    cout<<"Enter n & r: ";
    cin>>n>>r;
    cout<<"Before: "<<n << " " <<r <<endl;
    swap(n,r);
    cout<<"After: "<<n <<" " <<r << endl;
    return 0;
}