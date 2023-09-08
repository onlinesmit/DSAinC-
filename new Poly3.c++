#include<iostream>
using namespace std;

class subject
{
    public:
    int marks1, marks2;
    public:
    int add;

    subject(int m1, int m2){
        marks1 =m1;
        marks2 = m2;
    }

    void add(){
        cout<<marks1+marks2;
    }


};

class extraSubject : public subject
{
    public:
    int marks = 20;
};

int main()
{
    subject s = extraSubject();
    extraSubject();

    cout<< "Marks is: " << s.marks;
}
