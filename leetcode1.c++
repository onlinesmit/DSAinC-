#include<iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
    int sum =0, rem;
        while(x!=0){
        rem= x%10;
        sum = (sum * 10) + rem;
        x=x/10;
        }
        return sum;
    }
};
    
    int main(){
        int n;
        cout<<"Enter the number: ";
        cin>>n;
        cout<<"The number is: "<<reverse(n);

    }