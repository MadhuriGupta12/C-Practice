#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={0,9,8,7,6,5};
    int n=sizeof(arr)/4;
    int x=1;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    cout<<mx;
}
