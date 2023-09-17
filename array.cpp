#include<iostream>
using namespace std;

int main(){
    //int arr[] = {6,3,7,1,8};
    int n, arr[10];
    cout<<"Enter the no. of element: ";
    cin>>n;
    cout<<"Enter the element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    // cout<<"Printing the element same as we input: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    cout<<"Printing the element: ";
    for (int i=4; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
   return 0; 
}