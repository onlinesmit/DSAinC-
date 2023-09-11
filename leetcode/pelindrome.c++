#include<iostream>
using namespace std;

//main program
int main ()
{
    //variables initialization
    int num, reverse = 0, rem, temp;
    //num=12321;
    cout<<"Enter the number ";
    cin>>num;
    cout <<"\nThe number is: "<<num; 
   
 
    temp = num;
    //loop to find reverse number
    while(temp != 0)  //or temp>0
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    }
    
    // palindrome if num and reverse are equal
    if (num == reverse)
        cout << "\n" <<num << " is Palindrome";
    else
        cout << "\n" <<num << " is not a Palindrome";

}



// int pelindrome(int n, int rev){

//     while(n>0){
//         int rem = n%10;
//         rev = rev*10 + rem;
//         //n = n/10;
//     }
//     return pelindrome(n/10, rev);
// }

// int main(){

//     int n, rev =0;
//     cout<<"Enter the number ";
//     cin>>n;
//     cout<<"the number is: "<<n;
    
//     if(pelindrome(n, rev)==n)
//         cout<<"The no is pelindrome";
//     else
//         cout<<"Not a pelindome";

// return 0;
// }


