// recurtion use ki hu
#include<iostream>
using namespace std;
int fact(int x){
    if(x==1)return 1;
    return fact(x-1)*x;
}
int main(){
    int x;
    cout<<"enter your no.";
    cin>>x;
    cout<<fact(x);
}