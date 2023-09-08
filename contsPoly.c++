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
    parent p = child();
    child c;
    //cout << "age is "<< c.age;
    cout << "age is "<< p.age;
}
