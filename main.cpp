#include <iostream>
#include<string.h>
using namespace std;

class Emp
{
    int eid ;
    char* ename ;
    float salary ;
public:

    Emp()
    {
        eid = 0 ;
        ename = NULL ;
        salary = 0.0 ;
    }

    void setId(int id)
    {
        eid = id ;
    }

    void setName(char* name = new char[20])
    {
        ename = new char[20] ;
        strcpy(ename,name);
    }

    int getId()
    {
        return eid ;
    }

    char* getName()
    {
        return ename ;
    }

    void setSalary(float sal)
    {
        salary = sal ;
    }

    float getSalary()
    {
        return salary ;
    }

    Emp* searchEmp(Emp* e ,int n, char* name = new char[20])
    {
        for(int i=0 ; i<n ; i++)
        {
            if(strcmp(name,(e+i)->ename) == 0)
            {
                //cout<<"Record no. is "<<i<<"\n" ;
                //cout<<"Id of Emp : "<<(e+i)->eid ;
                //cout<<"Name of Emp : "<<(e+i)->ename ;

                return (e+i) ;
            }
        }
    }

    float maxSalary(Emp* e,int n)
    {
        float max = e->salary ;

        for(int i=0 ; i<n ; i++)
        {
            if(max < (e+i)->salary)
            {
                max = (e+i)->salary ;
            }
        }

        return max ;
    }

    ~Emp()
    {
        cout<<"\nMemory is Released \n" ;
    }
};

int main()
    {
        int n ;
        cout<<"Enter no. of records " ;
        cin>>n ;
        Emp* e = new Emp[n] ;

        for(int i=0 ; i<n ; i++)
        {
            cout<<"Enter record no . :"<<i ;
            int id ;
            char* name = new char[20] ;
            float salary ;
            cout<<"Enter id ";
            cin>>id ;
            cout<<"Enter name" ;
            cin>>name ;
            cout<<"Enter salary" ;
            cin>>salary ;
            (e+i)->setId(id);
            (e+i)->setName(name);
            (e+i)->setSalary(salary) ;
        }

        for(int i=0 ; i<n ; i++)
        {
            int id = (e+i)->getId() ;
            char* name = (e+i)->getName() ;
            float salary = (e+i)->getSalary() ;
            cout<<"Id is "<<" "<<id<<"\n" ;
            cout<<"Name is "<<" "<<name<<"\n" ;
            cout<<"Salary is "<<" "<<salary<<"\n\n" ;
        }

        char* sString = new char[20] ;
        cout<<"Enter a search string ";
        cin>>sString ;

        Emp* searchItem = new Emp() ;
        searchItem = e->searchEmp(e,n,sString);
        cout<<"Id : "<<searchItem->getId()<<"\n" ;
        cout<<"Name : "<<searchItem->getName()<<"\n" ;
        cout<<"Salary : "<<searchItem->getSalary()<<"\n\n" ;

        float maxSalary = e->maxSalary(e,n) ;
        cout<<"Maximum salary is : "<<maxSalary ;

    }
