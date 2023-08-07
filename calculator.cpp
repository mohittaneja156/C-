#include<iostream>
using namespace std;

int main(){
    int a,b;
    char x;
    cout<<"enter first number"<<endl;
    cin>>a;
    cout<<"enter second number"<<endl;
    cin>>b;
    cout<<"enter opearation"<<endl;
    cin>>x;
    switch(x){
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        default:
            cout<<"enter valid opeation"<<endl;
            break;
    }
    return 0;
}