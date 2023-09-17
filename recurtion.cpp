#include<iostream>
using namespace std;

// int greet(){
//     cout<<"Hey"<<endl;
//     greet(); //functio called itself
// }

// int greet(int n){
//     if(n==0)
//     return 0;
//     cout<<"Heyy"<<endl;
//     greet(n-1); //functio called itself
// }

int greet(int n){
    if(n==0)
    return 0;
    cout<<n<<endl;
    greet(n-1); //function called itself
}


int main(){
    greet(5);
}