#include<iostream>
using namespace std;

void reverse(char name[], int n){
    int i=0;
    int j= n-1;

    while(i<j){
        swap(name[i++], name[j--]);
    }
}

//CONVERTING LOWER CASE CONDITION....

char lowerCase(char ch){
    if(ch >= 'a' && ch <='z' ){
        return ch;
    }
    else{
            return ch -'A' +'a';
    }

}

//CONVERTING UPPER CASE CONDITION....

// char upperCase(char ch){
//     if(ch >= 'A' && ch <='Z' ){
//         return ch;
//     }
//     else{
//             return ch -'a' +'A';
//     }

// }

//FOR CHECKING PELINDROME...

bool pelindrome(char name[], int n){
    int i=0;
    int j =n-1;
    if(lowerCase(name[i])!= lowerCase(name[j])){
        return 0;
    }
    else{
        i++;
        j--;
    }
    return 1;

}

//FOR COUNTING LENGTH..

int getLength(char name[]){
int count=0;
for(int i=0; name[i] != '\0'; i++)
{
    count++;
}
return count;
}

//MAIN FUNCTION..

int main(){

    char name[20];
    int n;

cout<<"Enter your name: "<<endl;
cin>>name;
int len = getLength(name);
cout<<"lENGTH IS: "<<len<<endl;
reverse(name, len);
cout<<"your name is: ";
cout<<name<<endl;

cout<<"The name is pelindrome or not: "<<pelindrome(name, len)<<endl;

//for checking condithion of lowercase
//cout<< " Character is: "<<lowerCase('b')<<endl;
//cout<< " Character is: "<<lowerCase('C')<<endl;

return 0;
}