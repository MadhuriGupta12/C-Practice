#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={4,5,1,0,7,9,0,5};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}