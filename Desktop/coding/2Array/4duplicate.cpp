#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={0,9,8,7,6,6};
    int n=sizeof(arr)/4;
bool flag =false;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])flag=true;
        }
    }
    if(flag==true)cout<<"duplicate present";
    else cout<<"dublicate not present";
}