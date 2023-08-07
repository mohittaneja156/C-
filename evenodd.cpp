#include<iostream>
using namespace std;
bool even(int a){
    if(a%2==0) return true;
    return false ;
}
int main(){
    
    int a;
    cin>>a;
    if(even(a)){
        cout<<"the number is even";
    }
    else{
        cout<<"the number is odd";
    }
    return 0;
}