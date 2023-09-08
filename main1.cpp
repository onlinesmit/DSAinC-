#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node* next ;
    Node(int data)
    {
        this->data = data ;
        next = NULL ;
    }
};

class Stack
{
    int size ;
    Node* head ;

public:

    Stack()
    {
        head = NULL ;
        size = 0 ;
    }

    void push(int data)
    {
        Node* newNode = new Node(data) ;

        newNode->next = head ;
        head = newNode ;

        size++ ;
    }

    void pop()
    {
        int data = head->data ;
        cout<<"\n"<<"Deleted Item is : "<<data<<"\n" ;
        Node* temp = head->next ;
        Node* zamp = head ;
        zamp->next = NULL ;
        head = temp ;
        delete(zamp) ;
    }

    void display()
    {
        Node* temp = head ;

        while(temp != NULL)
        {
            cout<<temp->data<<" " ;
            temp = temp->next ;
        }
        cout<<"\n";
    }

    void arrangeNegElem()
    {
        Node* temp = head ;
        Node* curr = head ;

        while(temp != NULL)
        {
            if(temp->data > 0)
            {
                int t = temp->data ;
                temp->data = curr->data ;
                curr->data = t ;

                curr = curr->next ;
            }

            temp = temp->next ;
        }
    }
};

int main()
{
    Stack* item1 = new Stack() ;

    item1->push(10) ;
    item1->push(-20) ;
    item1->push(30) ;
    item1->push(-10) ;
    item1->push(20) ;
    item1->push(-30) ;
    item1->display();
    item1->pop();
    item1->display() ;
    item1->arrangeNegElem();
    item1->display() ;

    return 0;
}
