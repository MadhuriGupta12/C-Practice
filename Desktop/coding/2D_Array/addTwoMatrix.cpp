#include<iostream>
using namespace std;
int main(){
    int arr1[3][3]={1,4,5,8,2,9,1,3};
    int arr2[3][3]={1,4,5,8,2,9,1,3};
    int res[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            res[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}