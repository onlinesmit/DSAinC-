#include<iostream>
using namespace std;

int main(){

/*
//for pattern
   //       *      1      1
   //      **     22     12
   //     ***    333    123 
   //    ****   4444   1234 


    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int i =1;
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space = space-1;
        }

        int j=1;
        while(j<=i){
            //cout<<"*";
            //cout<<i;
            cout<<j;
            j= j+1;
        }
        cout<<endl;
        i= i+1;
    }
    */

/*
//for pattern
   //    ****   1111    1234
   //     ***    222     123
   //      **     33      12
   //       *      4       1


    int n;
    cout << "Enter the value of n: ";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }

        int j =1;
        while(j<=n-i+1){
           // cout<<"*";
           //cout<<i;
           cout<<j;
        j=j+1;
        }
        cout<<endl;
    i=i+1;
    }
*/


//for pattern
   //      1234
   //       234
   //        34      
   //         4       


    int n;
    cout << "Enter the value of n: ";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }

        int j =1;
        while(j<=n-i+1){
        
           cout<<i+j+1;
        j=j+1;
        }
        cout<<endl;
    i=i+1;
    }




return 0;
}