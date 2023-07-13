#include<iostream>
using namespace std;

int main()
{
/*
//for pattern
   //       AAAA   ABCD  
   //       BBBB   ABCD
   //       CCCC   ABCD
   //       DDDD   ABCD

int n;
cout << "Enter the value of n: ";
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        {
        char ch;
        //ch ='A'+i-1;
        ch = 'A'+j-1;
        cout<<ch<<" ";
        }
    j=j+1;
    }
    cout<<endl;
    i=i+1;
    }
*/

/*
//for pattern
   //       AAAA   ABCD  
   //       BBB    ABC
   //       CC     AB
   //       D      A

int n;
cout << "Enter the value of n: ";
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n-i+1){
        {
        char ch;
        //ch ='A'+i-1;
        ch = 'A'+j-1;
        cout<<ch<<" ";
        }
    j=j+1;
    }
    cout<<endl;
    i=i+1;
    }
*/

/*
//for pattern
   //      ABCD  ABCD   ABCD
   //      EFGH  DEFG   BCDE
   //      IJKL  GHIJ   CDEF
   
// int n;
// cout << "Enter the value of n: ";
// cin>>n;
// int i=1;
// char count = 'A';
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         {
//         cout<<count<<" ";
//         count = count+1;
//         }
//     j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//     }

int n;
cout << "Enter the value of n: ";
cin>>n;
char count = 'A';
int i=1;
while(i<=n){
    int j=1;

    while(j<=n){
        {
        count = 'A'+i+j-2; //1st method
        cout<<count<<" ";
        count = count+1;
        }
    j=j+1;
    }
    //count = count -1;  //2nd method
    cout<<endl;
    i=i+1;
    }
*/

// int n;
// cout << "Enter the value of n: ";
// cin>>n;
// char count = 'A';
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         {
//         cout<<count<<" ";
//         count = count+1;
//         }
//     j=j+1;
//     }
//     count = count -3;
//     cout<<endl;
//     i=i+1;
//     }



/*
//for pattern
   //       A      A     A
   //       BB     AB    BC
   //       CCC    ABC   DEF
   //       DDDD   ABCD  GHIJ

// int n;
// cout << "Enter the value of n: ";
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         {
//         char ch;
//         //ch ='A'+i-1;
//         ch = 'A'+j-1;
//         cout<<ch<<" ";
//         }
//     j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//     }


int n;
cout << "Enter the value of n: ";
cin>>n;
char ch = 'A';
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        {
        ch = 'A'+i+j-2;
        cout<<ch<<" ";
        ch = ch+1;
        }
    j=j+1;
    }
    
    cout<<endl;
    i=i+1;
    }
*/

//for pattern
   //       D      D     D
   //       CC     DC    CD
   //       BBB    DCB   BCD
   //       AAAA   DCBA  ABCD

int n;
cout << "Enter the value of n: ";
cin>>n;
int i=1;
char ch = 'A';
while(i<=n){
    int j=1;
    while(j<=i){
        {
       // ch= 'A'+n-i;
       // ch = 'A'+n-j;
        ch = 'A'+n-i+j-1;
        cout<<ch<<" ";
        }
    j=j+1;
    }
    cout<<endl;
    i=i+1;
    }

return 0;
}