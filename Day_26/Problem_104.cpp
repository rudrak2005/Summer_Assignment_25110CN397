#include<iostream>
using namespace std;

int main(){
    int score = 0;
    char ans;
    cout<<"Q1.  C++ creator?\n";
    cout<<"(a) Bajarne Stroustrup\n";
    cout<<"(b) James Gosling\n";

    cin>>ans;

    if(ans=='a')
        score++;
    
    cout<<"\nQ2. 2+3= ?\n";
    cout<<"(a) 4\n";
    cout<<"(b) 5\n";

    cin>>ans;

    if(ans=='b')
            score++;
    
            cout<<"\nFinal score =  "<<score<<"/2";
            return 0;
            
}