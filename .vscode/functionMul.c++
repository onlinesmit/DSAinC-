#include<iostream>
using namespace std;
 
void usa(){
    cout<< "you are in usa: ";
     
}
void india(){
    cout<<"You are in india: "<< endl;
    cout << "Or" <<endl;
    usa();
}
int main(){
    india();
    return 0;
}