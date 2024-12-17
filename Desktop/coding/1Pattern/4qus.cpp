#include<iostream>
using namespace std;
int main(){
    int n=4;
   
//    *
//   **
//  ***
// ****
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }

//    ****
//   ****
//  ****
// ****

 for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<=n;k++){
            cout<<"*";
        }
        cout<<endl;
    }

//     *
//    ***
//   *****
//  *******
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<=2*i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
//    1
//   121
//  12321
// 1234321
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int r=1;r<i;r++){
            cout<<i-r;
        }
        cout<<endl;
    }
//     *
//    ***
//   *****
//  *******
//   *****
//    ***
//     *
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<=2*i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=0;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<=2*i;k++){
            cout<<"*";
        }
        cout<<endl;
    }

// *******
// *** ***
// **   **
// *     *

    for(int i=0;i<2*n-1;i++){  //first line ke liye
        cout<<"*";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        for(int k=0;k<=2*i;k++){
            cout<<" ";
        }
        for(int r=0;r<n-i-1;r++){
            cout<<"*";
        }
        cout<<endl;
    }
}
