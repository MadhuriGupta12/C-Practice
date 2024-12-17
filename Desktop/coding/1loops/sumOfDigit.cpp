//12345=1+2+3+4+5=15
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter your no.";
    cin>>x;
    int rem=0;
    int sum=0;
    while(x>0){
        rem=x%10;
        sum=sum+rem;
        x=x/10;
    }
    cout<<sum;
}