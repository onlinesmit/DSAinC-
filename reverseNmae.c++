#include<iostream>
using namespace std;

void reverse(char name[], int n){
    int i=0;
    int j= n-1;

    while(i<j){
        swap(name[i++], name[j--]);
    }
}

int getLength(char name[]){
int count=0;
for(int i=0; name[i] != '\0'; i++)
{
    count++;
}
return count;
}

int main(){

    char name[20];
    int n;

cout<<"Enter your name: "<<endl;
cin>>name;
int len = getLength(name);
reverse(name, len);
cout<<"your name is: ";
cout<<name<<endl;

return 0;
}