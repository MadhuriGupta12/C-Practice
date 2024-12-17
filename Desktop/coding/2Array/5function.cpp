#include<iostream>
#include <climits>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
void change(int arr[]){
    arr[0]=100;
}
int main(){
    int arr[]={0,9,8,7,6,5};
    int n=sizeof(arr)/4;
    display(arr,n);
    change(arr);
    display(arr,n);
}