// #include <iostream>

// using namespace std;


// class emp{
//     int eid;
//     public:
//     void setid(int id)
//     {
//         eid =id;
        
//     }
//     int getid()
//     {
//         return eid;
        
//     }
// };

// int main()
// {
//     int rec;
//     int id;
//     cout<<"How many records your want to entered \n" ;
//     cin>>rec;
//     emp* e= new emp[rec];
//     cout<<"\n enter the record";
//     for(int i=0;i<rec;i++)
//     {
//         cout<<"\n enter record.... ";
//         cout<<"\n enter employee id...";
//         cin>>id;
//         (e+i)->setid(id);
//     }
    
// }

#include <iostream>
#include <string>
using namespace std;

// Define the class employee
class employee {
    private:
        // Data members
        int eid;
        string ename;
        double esalary;
    public:
        // Member functions
        // Default constructor
        employee() {
            eid = 0;
            ename = "";
            esalary = 0.00;
        }
        // Destructor
        ~employee() {
            cout << "Memory is released" << endl;
        }
        // Setters
        void seteid(int id) {
            eid = id;
        }
        void setename(string name) {
            ename = name;
        }
        void setesalary(double salary) {
            esalary = salary;
        }
        // Getters
        int geteid() {
            return eid;
        }
        string getename() {
            return ename;
        }
        double getesalary() {
            return esalary;
        }
        // Search record by ename
        bool searchRecordByEname(string name) {
            return (ename == name);
        }
};

// Define a function to find the maximum salary among n employees
double maxSalary(employee* arr, int n) {
    double max = 0.00;
    for (int i = 0; i < n; i++) {
        if (arr[i].getesalary() > max) {
            max = arr[i].getesalary();
        }
    }
    return max;
}

// Main function
int main() {
    // Declare a variable to store the number of employees
    int n;
    // Prompt the user to enter the number of employees
    cout << "Enter the number of employees: ";
    cin >> n;
    // Check the constraints
    if (n < 1 || n > 10) {
        cout << "Invalid input. The number of employees should be between 1 and 10." << endl;
        return 0;
    }
    // Create an array of n objects of class employee using new operator
    employee* emp = new employee[n];
    // Loop through the array and prompt the user to enter the details of each employee
    for (int i = 0; i < n; i++) {
        cout << "Enter the details of employee " << i+1 << ":" << endl;
        int id;
        string name;
        double salary;
        cout << "Enter the employee id: ";
        cin >> id;
        cout << "Enter the employee name: ";
        cin >> name;
        cout << "Enter the employee salary: ";
        cin >> salary;
        emp[i].seteid(id);
        emp[i].setename(name);
        emp[i].setesalary(salary);
    }
    // Prompt the user to enter a name to search for
    string sname;
    cout << "Enter a name to search for: ";
    cin >> sname;
    // Loop through the array and check if any employee matches the name
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (emp[i].searchRecordByEname(sname)) {
            found = true;
            // Display the details of the matching employee
            cout << "Employee found with name " << sname << ":" << endl;
            cout << "Employee id: " << emp[i].geteid() << endl;
            cout << "Employee name: " << emp[i].getename() << endl;
            cout << "Employee salary: " << emp[i].getesalary() << endl;
            break; // Exit the loop once a match is found
        }
    }
    // If no match is found, display a message
    if (!found) {
        cout << "No employee found with name " << sname << "." << endl;
    }
    // Find and display the maximum salary among n employees
    double max = maxSalary(emp, n);
    cout << "The maximum salary among " << n << " employees is: " << max << endl;

    // Delete the array of objects using delete operator
    delete[] emp;

    return 0;   
}
