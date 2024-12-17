#include<iostream>
using namespace std;
int main(){ 
    int x=3;
//1st
    // for(int i=0;i<x;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
 //2nd
    for(int i=0;i<x;i++){
        for(int j=0;j<x-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }  
// //3rd
    //    for(int i=0;i<x;i++){
    //     for(int j=1;j<x-i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=0;k<=i;k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
//4th
    // for(int i=0;i<x;i++){
    //     for(int j=0;j<=i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int k=x;k>i;k--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
} 