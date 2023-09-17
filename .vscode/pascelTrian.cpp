#include<iostream>
using namespace std;

int fact(int x){
    int fact =1;
    for(int i=1; i<=x; i++){
     fact = fact*i;
    }
    return fact;
   }


int pas(int n, int r){
   return fact(n)/(fact(r)*fact(n-r));
}

int main(){

    int n, i, j;
    cout<<"Entre the value of n: ";
    cin>>n;
    
    for(i=0; i<=n; i++)
    {
        for ( j = 0; j <= n-i; j++)
        {
            cout<<" ";
        }
        
        for(j=0; j<=i; j++){
            cout<< pas(i,j) <<" ";
        }
        cout<<endl;
    }
}