#include <iostream> 
using namespace std;

int main(){
    int choice;
    double balance=1000; 
    double amount;

    do{
        cout<<"\n1.Check Balance\n";
        cout<<"2.Deposit\n";
        cout<<"3.Withdram\n";
        cout<<"4.Exit\n";

        cin>>choice;

        switch(choice){
            case 1:
                    cout<<"Balance = "<<balance;
                    break;
            case 2: 
                    cin>>amount;
                    balance += amount;
                    break;
            case 3:
                    cin>>amount;
                    
                    if(amount<=balance)
                            balance -= amount;
                    else    
                        cout<<"Insufficient Balance";
                    break;
        }
    }while(choice !=4);
    return 0;
}