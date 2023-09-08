// #include<iostream>
// using namespace std;
// #define MAX 100

// void minArr(int n, int arr[MAX]);

// int main(){

// int n, arr[MAX];
// cout<<"Enter the number of element in array: ";
//  cin>>n;
// cout<<"Enter the elements: ";
// for(int i =0; i<n; i++){
//     cin>>arr[i];
// }
//  minArr(n, arr);

// return 0;
// }

// void minArr(int n, int arr[MAX]){

//     int min, i;
//     min = arr[0];
//     for( i=0; i<n; i++){
//         if(arr[i]<min)
//         min = arr[i];
        
//     }
//     cout<<"min arr is: "<<min;
    
// }

#include<iostream>
using namespace std;
#define MAX 100

void minArr(int n, int arr[MAX][MAX]);

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

minArr(n, arr);

return 0;
}

void minArr(int n, int arr[MAX][MAX]){

    int min, i,j;
    min = arr[0][0];
    for( i=0; i<n; i++){
        for( j=0; j<n; j++){
        if(arr[i][j]<min)
        min = arr[i][j];
        }  
    }
    cout<<"min arr is: "<<min;
    
}