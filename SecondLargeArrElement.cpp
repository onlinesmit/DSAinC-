#include<iostream>
using namespace std;

int main(){
    // int arr[] = {6,3,7,4,8, 23, 5};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // // int n, arr[10];
    // // cout<<"Enter the no. of element: ";
    // // cin>>n;
    // // cout<<"Enter the element: ";
    // // for (int i = 0; i < n; i++)
    // // {
    // //     cin>>arr[i];
    // // }
    // // int mn = arr[0];
    // int mn = INT32_MAX;
    // cout<<"Printing the 2nd Min: ";
    // for (int i = 0; i < n; i++)
    // {
    //     //  if(arr[i]<mn){
    //     //     mn=arr[i];
    //     //  }
    //      mn = min(mn,arr[i]);
    // }

    // int smn = INT32_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //      if(arr[i]!=mn)
    //          smn = min(smn, arr[i]);
    // }
    //      cout<<smn;


         //this is for maximum 2nd 

    int arr[] = {6,3,7,4,8, 23, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int n, arr[10];
    // cout<<"Enter the no. of element: ";
    // cin>>n;
    // cout<<"Enter the element: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // int mx = arr[0];
    int mx = INT32_MIN;
    cout<<"Printing the 2nd MAXIMUM No: ";
    for (int i = 0; i < n; i++)
    {
        //  if(arr[i]>mx){
        //     mx=arr[i];
        //  }
         mx = max(mx,arr[i]);
    }

    int smx = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
         if(arr[i]!=mx)
             smx = max(smx, arr[i]);
    }
         cout<<smx;


}