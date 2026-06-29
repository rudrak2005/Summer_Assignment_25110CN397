#include<iostream>
#include<string>
using namespace std;

struct Student{
    int roll;
    string name;
    float marks;
};
int main ()
{
            Student s;
            cout<<"enter  roll Number: ";
            cin>>s.roll;
            cin.ignore();
            cout<<"Enter Name: ";
            getline(cin, s.name);


            cout<<"Enter marks: ";
            cin>>s.marks;

            cout<<"\n----- Student Record -------\n";
            cout<<"Roll Number : "<<s.roll<<endl;
            cout<<"Name        : "<<s.name<<endl;
            cout<<"Marks       : "<<s.marks<<endl;

            return 0;
}