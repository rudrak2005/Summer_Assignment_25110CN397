#include<iostream>
using namespace std;

int main()
{
    float marks[5];
    float total=0;

    for(int i=0; i<5; i++){
        cout<<"Enter marks of Subject "<<i+1<<": ";
        cin>>marks[i];
        total += marks[i];
    }

    float per = total/5;
    cout<<"\nTotal = "<<total<<endl;
    cout<<"percentage = "<<per<<endl;
    
    if(per>=90){cout<<"Grade = A+";}
    else if(per>=80){cout<<"Grade = A";}
    else if(per>=70){cout<<"Grade = B";}
    else if (per>=60){cout<<"Grade = C";}
    else{
        cout<<"Grade = Fail";

    }
    return 0;
}