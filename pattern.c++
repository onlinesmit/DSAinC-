#include<iostream>
using namespace std;

int main(){

    //for pattern
   // ****   1111    1234
   // ****   2222    1234
   // ****   3333    1234
   // ****   4444    1234

   /* int n;
   cout << "Enter the value of n: ";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j =1;
        while(j<=n){
            //cout<<"*";
            //cout<<i;
            cout<<j;
        j=j+1;
        }
        cout<<endl;
    i=i+1;
    }
    */

   //for pattern
   //    4321   4444    
   //    4321   3333    
   //    4321   2222   
   //    4321   1111   

   /* int n;
   cout << "Enter the value of n: ";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j =1;
        while(j<=n){
            cout<<n-j+1;
            //cout<<n-i+1;
        j=j+1;
        }
        cout<<endl;
    i=i+1;
    }
    */
    
    //for pattern
   //    ****   1111    1234
   //    ***    222     123
   //    **     33      12
   //    *      4       1

/*
    int n;
    cout << "Enter the value of n: ";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j =1;
        while(j<=n-i+1){
            cout<<i;
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
   //     4444    4321
   //     333     321
   //     22      21
   //     1       1


   /* int n;
    cout << "Enter the value of n: ";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j =1;
        while(j<=n-i+1){
            cout<<n-i+1;
           // cout<<n-j+1;

        j=j+1;
        }
        cout<<endl;
    i=i+1;
    }
    */

   //for pattern
   //    1234     
   //    5678       
   //    9101112     
   //    13141516

  /*  int n;
   cout << "Enter the value of n: ";
    cin>>n;

    int i=1 , count=1;
    while(i<=n)
    {
        int j =1;
        while(j<=n){
            {
            cout<<count<<" ";
            count = count +1;
            }
        j=j+1;
        }
        cout<<endl;
    i=i+1;
    }
*/

 //for pattern
   //    *      1      1
   //    **     22     12
   //    ***    333    123
   //    ****   4444   1234 

/*
    int n;
    cout << "Enter the value of n: ";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j =1;
        while(j<=i){
            //cout<<"*";
           //cout<<i;
           cout<<j;
        j=j+1;
        }
        cout<<endl;
    i=i+1;
    }
*/

//for pattern
   //       4      4
   //       33     43
   //       222    432
   //       1111   4321 


  /*  int n;
    cout << "Enter the value of n: ";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j =1;
        while(j<=i){
        
          // cout<<n-i+1;
           cout<<n-j+1;
        j=j+1;
        }
        cout<<endl;
    i=i+1;
    }
*/

//for pattern
   //       1      1
   //       23     12
   //       456    234
   //       78910  4567

/*
    int n;
    cout << "Enter the value of n: ";
    cin>>n;

    // int i=1, count =1;
    // while(i<=n)
    // {
    //     int j =1;
    //     while(j<=i){
    //         {
    //        cout<< count<< " ";
    //        count = count +1;
    //         }
    //     j=j+1;
    //     }
    //     cout<<endl;
    // i=i+1;
    // }

    int i=1, count =1;
    while(i<=n)
    {
        int j =1;
        cout << count <<" ";
        while(j<=i){
            {
           count = count +1;
           cout<< count<< " ";
            }
        j=j+1;
        }
        cout<<endl;
    i=i+1;
    }
*/

//for pattern
   //       1     
   //       21     
   //       321  
   //       4321  

/* 
int n;
cout << "Enter the value of n: ";
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        {
        cout<<i-j+1<<" ";
        }
    j=j+1;
    }
    cout<<endl;
    i=i+1;
    }
    */

//for pattern
   //       4    
   //       43     
   //       432  
   //       4321  

int n;
cout << "Enter the value of n: ";
cin>>n;
int i=1;
while(i<=n){
    int j=1;

    while(j<=i){
        {
        cout<<n-j+1<<" ";
        }
    j=j+1;
    }
    cout<<endl;
    i=i+1;
    }


    return 0;
}