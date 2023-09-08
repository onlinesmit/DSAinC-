#include<iostream>
using namespace std;

class parent
{
    public:
    int age = 40;
};

class child : public parent
{
public:
int age = 20;
};

int main(){
    child c;
    cout << "age is "<< c.age;
}