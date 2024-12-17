// #include<iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int arr[]={0,9,8,7,6,5};
//     int n=sizeof(arr)/4;
//     int x=1;
//     int mx=-1;
//     int smx=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>mx)mx=arr[i];
//     }
//         for(int i=0;i<n;i++){
//         if(arr[i]!=mx && arr[i]>smx)smx=arr[i];
//     }
//     cout<<mx<<endl;
//     cout<<smx;
// }


// 1 itteration me
#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={0,9,8,7,6,5};
    int n=sizeof(arr)/4;
    int x=1;
    int mx=-1;
    int smx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            smx=mx;
            mx=arr[i];
        }else smx=max(smx,arr[i]);
    }
    cout<<mx<<endl;
    cout<<smx;
}