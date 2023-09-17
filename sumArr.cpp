#include<iostream>
using namespace std;

int main(){
    int arr[] = {6,3,7,1,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int n, arr[10];
    // cout<<"Enter the no. of element: ";
    // cin>>n;
    // cout<<"Enter the element: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    int sum =0;
    cout<<"Printing the sum: ";
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;

}