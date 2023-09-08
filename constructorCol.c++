#include<iostream>
using namespace std;

class parent
{
    public:
    parent(){
        cout<<"Constructor parent class";
    }

    ~parent(){
        cout<<"Destructor parent class";
    }

};

class child : public parent 
{
    public:
    child(){
        cout<<"Child cons. called";
    }
    ~child()
    {
        cout<<"Child destru.. called";
    }
};

int main()
{
    child();
}