#include<iostream>
using namespace std;

int main(){

    int num;
    char ch;
  // cout << "Enter the number: ";
   cout<<"Enter the character: ";
    cin>>num;
    cin>>ch;

    //switch(num)  
    switch(ch){
        // case 1:
        //     cout<<"Frist"<<endl;
        //     break;
        // case 2:
        //     cout<<"second"<<endl;
        //     break;
        case '1':
            switch(num){
                case 1:
                       cout<<"Value of num is: "<< num <<endl;
                       break;
            }
          //  cout<<"First char"<<endl;
            break;
        case '2':
            cout<<"Second Char"<<endl;
            break;
        default:
            cout<<"Heyy dear"<< endl; 
    }
}