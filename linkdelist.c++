#include<iostream>
using namespace std;

class Node
{
    
    public:
    int data;
    Node *next;

        Node(){
            data =0;
            next = NULL;
        }

    Node (int n){
        this ->data=n;
        this->next = NULL;
    }
};

class linkedlist
{
    public: 
    Node *next;
    Node *head;
    linkedlist()
    {
        head = NULL;
    }

    void insertNode(int);
    void displayNode();
};

void linkedlist :: insertNode(int n)
{

    Node *newnode = new(nothrow) Node(n);
    {
        if(!newnode)
        {
            cout<<"Not enough data";
            exit(1);
        }

        if( head ==NULL){
            head = newnode;
        }
        else{
              Node *temp;
              temp = head;
        
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
}


void linkedlist :: displayNode()
{

    Node *temp;
    temp = head;
    if(temp==NULL){
        cout<<"No data";
        exit(1);
    }

    while(temp!=NULL){

        cout <<temp->data;
        temp = temp->next;
    }
}


int main(){
    int rec,i;
    int data;

    linkedlist *list = new(nothrow) linkedlist;
    if(!list){}
    cout<<"How many records you want to insert: ";
    cin>>rec;

    for(i=0; i<rec; i++){
        cout<<"Enter the data: ";
        cin>>data;
        list ->insertNode(data);
    }
   
    list->displayNode();
    return 0;
}