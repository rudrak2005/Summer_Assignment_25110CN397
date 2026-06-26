#include <iostream>
using namespace std;

int main(){
    int secret =25;
    int guess;

    do{
        cout<<"enter your guess ";
        cin>>guess;
        
        if(guess<secret)
            cout<<"Too Low\n";
        else if(guess>secret){
            cout<<"too high\n";}
    else {
            cout<<"Correct You won\n";

        }
    
        }while(guess !=secret);
        return 0;

  
}