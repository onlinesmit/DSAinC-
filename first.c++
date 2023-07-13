#include<iostream>
using namespace std;
int main()
{
    //cout << "Mai kuch naya krne ja rha hun" << endl;
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // cout << "Value of n is: " << n << endl;

    // if(n>0)
    //     cout << "Value is +ve" << endl;
    // else if(n==0)
    //     cout << "Value is Zero" << endl;
    // else
    //     cout << "Value is -Ve" << endl;


    int a, b;
    cout << "Enter the value of a & b: ";
    cin >> a >> b;
    cout << "Value of a & b is: " << a << " " << b << endl;

    if(a>b)
        cout << "Greater is a" << endl;
    else if(a==b)
        cout << "Equal" << endl;
    else
        cout << "Greater is b" << endl;
    return 0;
}