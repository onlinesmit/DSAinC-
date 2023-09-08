#include<iostream>
using namespace std;
#define MAX 100

void maxArr(int n, int arr[MAX][MAX]);

int main(){

int n, arr[MAX][MAX];
cout<<"Enter the number of element in array: ";
 cin>>n;
cout<<"Enter the elements: ";
for(int i =0; i<n; i++){
    for (int j = 0; j < n; j++)
    {
    cin>>arr[i][j];
     }
}
maxArr(n, arr);

return 0;
}

void maxArr(int n, int arr[MAX][MAX]){

    int max, i,j;
    max = arr[0][0];
    for( i=0; i<n; i++){
        for( j=0; j<n; j++){
        if(arr[i][j]>max)
        max = arr[i][j];
        }  
    }
    cout<<"min arr is: "<<max;
    
}