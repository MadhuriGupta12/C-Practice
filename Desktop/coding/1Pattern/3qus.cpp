#include<iostream>
using namespace std;
int main(){
    int n=5;

//      *
//      *
//  * * * * *
//      *
//      * 
    // int mid=n/2;
    // for(int i =0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i==mid || j==mid){
    //             cout<<"*";
    //         }else cout<<" ";
    //     }
    //     cout<<endl;
    // }

// *   *
//  * *
//   * 
//  * *
// *   *
   
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || (i+j)==n-1){
                cout<<"*";
            }else cout<<" ";
        }
        cout<<endl;
    }
}