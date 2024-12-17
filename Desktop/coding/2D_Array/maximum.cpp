#include<iostream>
#include<algorithm>
#include<climits>
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
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mx=max(mx,arr[i][j]);
        }
    }
    cout<<mx;
}