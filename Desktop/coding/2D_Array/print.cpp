#include<iostream>
using namespace std;
int main(){
    // int arr[2][2]={2,4,5,8};
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }


//input le rhi hu
    int n,m;
    cout<<"enter thr row no.";
    cin>>n;
    cout<<"enter the colom no.";
    cin>>m;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    //output
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
