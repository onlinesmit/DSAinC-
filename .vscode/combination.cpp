#include<iostream>
using namespace std;

// int main(){
//     int n, r;
//     cout<<"Enter n: ";
//     cin>>n;
//     cout<<"enter r: ";
//     cin>>r;

//     int factn = 1;
//     int factr = 1;
//     int factS = 1;
//     for(int i=1; i<=n; i++)
//     {
//          factn = factn*i;
//     }
//     for (int i = 1; i <= r; i++)
//     {
//           factr = factr *i;
//     }
//      for (int i = 1; i <= n-r; i++)
//     {
//           factS = factS *i;
//     }
    
//     int combination = factn/ (factr*factS);
//     cout<<combination;

//     return 0;
// }

//by using function
// int fact(int x){
//     int fact =1;
//     for(int i=1; i<=x; i++){
//      fact = fact*i;
//     }
//     return fact;
// }

int fact(int x){
    int fact =1;
    for(int i=1; i<=x; i++){
     fact = fact*i;
    }
    return fact;
}


int main(){
    int n, r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"enter r: ";
    cin>>r;

    int factn = fact(n);
    int factr = fact(r);
    int factS = fact(n-r);

    int combination = factn/ (factr*factS);
    cout<<combination;

}