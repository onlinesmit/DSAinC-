#include<iostream>
using namespace std;

int main(){
    int arr[] = {6,3,7,11,45,36};
    int n = sizeof(arr)/sizeof(arr[0]);

     cout<<"Before reversed: ";
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i]<<" ";
    }

    //reverse by using 2nd array

    // int arr2[n];
    // for (int i = 0; i < n; i++)
    // {
    //     arr2[i] = arr[n-1-i];

    //     cout<<arr2[i]<<" ";
    // }
    
    //reverse without using 2nd array

    int i =0;
    int j = n-1;
    while (i<j)
    {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp; 
    i++;
    j--;     
    }
    cout<<endl;
    cout<<"After reversed: ";
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i]<<" ";
    }
    
}