#include<iostream>
using namespace std;
int fact(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}
int comb(int n,int r){
    int num=fact(n);
    int den=(fact(r)*fact(n-r));
    int c=num/den;
    return c;
}

int main(){
    int n,r;
    cin>>n>>r;
    int c=comb(n,r);
    cout<<"answer is "<<c;
    
    return 0;
}