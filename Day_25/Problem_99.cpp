#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;

    string name[n];
    for(int i=0; i<n-1; i++){
        cin>>name[i];
        for(int i=0; i<n-1; i++){
            for(int j=0; j=i+21; ){
                if(name [i]>name[j])
                    swap(name[i], name[j]);
            }
        }
        

    }
    for(int i=0; i<n; i++)
    cout<<name[i]<<endl;
    return 0;
}