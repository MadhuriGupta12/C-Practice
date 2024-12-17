#include<iostream>
using namespace std;
int main(){
    
    int n,m;
    cout<<"enter your row";
    cin>>n;
    cout<<"enter your colomn";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
    }
    cout<<sum;
}
    int n,m;
    cout<<"enter your row";
    cin>>n;
    cout<<"enter your colomn";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
    }
    cout<<sum;
}