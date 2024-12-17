// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     int arr[]={3,4,5,1,2};
//     int n=sizeof(arr)/4;
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     cout<<sum;
// }

//input le kr
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    //arary input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}