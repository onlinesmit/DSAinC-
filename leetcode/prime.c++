#include<iostream>
using namespace std;
int main(){

int i, j, n,  count;

// cout<<"Enter the number:";
// cin>>n;

 j =1;
while (j<=100)
{
count =0;
    i =1;
    while (i<=j)
    {
        if(j%i==0){
            count ++;
        }
    i = i+1;
    }
     if(count ==2){
    //cout<<"Prime no is: " << "\n";
    cout<< j << " ";
   }
     j=j+1;
}

   
    // else
    // cout<<"Not prime: ";
    return 0;
}