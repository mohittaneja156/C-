#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int x=2;
    cout<<endl;
    switch (x)
    {
    case 1:
        cout<<"first case";
        break;
    case 2:
        cout<<"second case";
        break;
    default:
        cout<<"no case";
        break;
    }
    cout<<endl;
    return 0;
}
