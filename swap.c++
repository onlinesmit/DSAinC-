//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void swap(int a, int b){
    a =a+b;
    b=a-b;
    a=a-b;
    
    cout<< a<<" "<< b;
}


int main(){

    int x, y;
    
    cin>>x>>y;
    cout<<"Before: "<<x <<" "<<y <<endl;

    cout<<"After: ";
    swap(x, y);
  

}