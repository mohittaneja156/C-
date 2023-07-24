#include<iostream>
using namespace std;

int main(){
    //to print rectangular patteren
    int c,r;
    cout<<"Enter number of rows\n";
    cin>>r;
    cout<<"Enter number of columns\n";
    cin>>c;
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<endl;
    //to print hollow rectangle
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if (j==0 || j==(c-1))
            {
            cout<<"*";
            }
            else if(i==0||i==(r-1)) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }

    return 0;
}