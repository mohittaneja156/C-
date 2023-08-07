#include<iostream>
using namespace std;
void printcounting(int a){
    for(int i=1;i<=a;i++){
        cout<<i<<endl;
    }

}

int main(){
    int a;
    cin>>a;
    printcounting(a);
    return 0;
}