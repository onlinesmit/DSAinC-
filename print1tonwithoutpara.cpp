#include<iostream>

 
int print(int n){
    if(n==0)
    return 0;
    //std::cout<<n<<std::endl; //decresing order
    print(n-1); //function called itself
    std::cout<<n<<std::endl; //incresing order
}


int main(){
    int n;
    std::cout<<"Enter the N: ";
    std::cin>>n;
    print(n);
}