#include<iostream>
using namespace std;
int main(){ 
    int n=4;
// 1
// AB
// 123
// ABCD
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0)cout<<(char)(64+j);
            else cout<<j;
        }
        cout<<endl;
    }
// *
// **
// ***
// ****
// ***
// **
// *
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
        for(int i=n;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
// ******
// *    *
// *    *
// ******
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 ||i==n-1 ||j==n-1){
                cout<<"*";
            }else cout<<" ";
        }
        cout<<endl;
    }
//    A
//   AB
//  ABC
// ABCD  
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<(char)(64+k);
        }
        cout<<endl;
    }
//    *
//   **
//  ***
// ****
//  ***
//   **
//    *   
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=0;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}