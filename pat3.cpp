#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
     
    //inverted number patteren
    int a=n;
    for(int i=0;i<n;i++){
        for (int j = 1; j <= a; j++){
            cout<<j<<" ";
        }
        a--;
        cout<<endl;
    } 
    cout<<endl;

    //0 1 pattern
   for(int i=0;i<n;i++){
        for (int j = 1; j <= i; j++){
            if((i+j)%2==0){
                cout<<1<<" ";
            }
            else {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }    
    cout<<endl;
    //rhombus patteren
    for(int i=1;i<=n;i++){
        int space=n-i;
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;

    }
    cout<<endl;

    //number patteren
    for(int i=1;i<=n;i++){
        int space=n-i;
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;

    }
    cout<<endl;

    //palindrome patteren
    for(int i=1;i<=n;i++){
        int space=n-i;
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<j;
        }
        if(i>=2){
            for(int j=2;j<=i;j++){
                cout<<j;
            }
        }
        

        cout<<endl;

    }
    cout<<endl;
    //star patteren
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=0;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    //zig zag pattern
    int rows=3;
    for (int i = 1; i <= rows; i++){
       for(int j=1;j<=n;j++){
        if(((i+j)%4==0)||(i==2 && j%4==0)){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
       }
       cout<<endl; 
    }
    

    return 0;
}