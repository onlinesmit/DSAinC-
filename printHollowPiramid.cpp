#include<iostream>
using namespace std;

//*
//  *
//    *
//      *
//        *

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     for(int i =1; i<=n; i++){
//         for (int j = 1; j <= i; j++)
//         {   if(i==j)
//             cout<<"* ";

//             cout<<" ";
//         }
//         cout<<endl;
        
//     }

//*
//** 
//* *    
//*  *      
//*   *
//*    *
//*******        

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;

//     for(int i =1; i<=n; i++){
//         for (int j = 1; j <= i; j++)
//         {   
//             if((i>2 && i<n) && (j>1 && j<i))
//             cout<<" ";
//             else
//             cout<<"*";
//         }
//         cout<<endl;
        
//     }

//*
//** 
//*^*    
//*^^*      
//*^^^*
//*^^^^*
//*******        

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    // for(int i =1; i<=n; i++){
    //     for (int j = 1; j <= i; j++)
    //     {   
    //         if((i>2 && i<n) && (j>1 && j<i))
    //         cout<<"^";
    //         else
    //         cout<<"*";
    //     }
    //     cout<<endl;
        
    // }


//*******
//** 
//*^*    
//*^^*      
//*^^^*


    for(int i =1; i<=n; i++){
        for (int j = 1; j <= n; j++)
        {   
            if((i==j)||(i==1)||(i==n)||(j==1)||(j==n))
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
        
    }
}