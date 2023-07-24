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

    cout<<endl;
    //inverted half pyramid 
       for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cout<<"*";
        ;
        }
        c--;
        cout<<"\n";
    }
    cout<<endl;    

//hald pyramid after 180 degree rotation
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j<(r-i-1)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }

    cout<<endl;

//floyd's triangle

    return 0;
}