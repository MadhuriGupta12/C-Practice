#include<iostream>
using namespace std;
int main(){
    int arr[]={0,9,8,7,6,5};
    int n=sizeof(arr)/4;
    int x=1;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(x==arr[i])flag=true;
    }
    if(flag==true)cout<<"present ";
    else cout<<"not present";
}