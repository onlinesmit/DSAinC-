#include<iostream>
using namespace std;

int main()
{
    /*
//for pattern
//    1
//   121
//  12321
// 1234321
//123454321

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int i =1;
    while(i<=n){
        int space = n-i; //space
        while(space){
            cout<<" ";
            space = space-1;
        }
//2nd triangle
        int j=1;
        while(j<=i){
            cout<<j;
            j= j+1;
        }

    int start =i-1;
    while(start){
        cout<<start;
        start=start-1;
    }

        cout<<endl;
        i= i+1;
    }
    */


int n;
cout<<"Enter value of n: ";
cin>>n;
 
int i, j;

for(i=1; i<=n; i++){
    for(j=0; j<n-i+1; j++){
        cout<<j;
    }
    for(j=1; j<=2*i+1; j++){
        cout << "*";
    }
    for(i=1; i<n-i+1; j++){
        cout<<j;
    }
    cout<<endl;
    }
   return 0;
}