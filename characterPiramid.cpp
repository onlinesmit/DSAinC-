#include<iostream>
using namespace std;

int main(){
    char ch;
    ch = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<ch<<" ";
        }
            ch = ch+1;
            cout<<endl;
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     ch = 'A';
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<ch<<" ";
    //         ch = ch+1;
    //     }
    //     cout<<endl;
    // }
    return 0;
    
}