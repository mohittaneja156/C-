#include<iostream>
using namespace std;
bool isprime(int n){
    if(n==0||n==1) return 0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0) return 0;
    
    }
    return 1;
}
int main(){
    int a;
    cin>>a;
    if(isprime(a)){
        cout<<"is a prime number"<<endl;
    }
    else cout<<"is not a prime number"<<endl;
    return 0;
}