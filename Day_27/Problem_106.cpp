#include<iostream>
#include<string>
using namespace std;

struct employee{
    int id;
    string name;
    float salary;
};
int main ()
{
            employee emp;
            cout<<"enter  employee ID Number: ";
            cin>>emp.id;
            cin.ignore();
            cout<<"Enter Name: ";
            getline(cin, emp.name);


            cout<<"Enter salary: ";
            cin>>emp.salary;

            cout<<"\n------- Employee Details -------\n";
            cout<<"ID Number   : "<<emp.id<<endl;
            cout<<"Name        : "<<emp.name<<endl;
            cout<<"Salary      : "<<emp.salary<<endl;

            return 0;
}