#include<iostream>
using namespace std;
int fact(int n){
    int product=1;
    for(int i=n;i>0;i--){
        product=product*i;
    }
}
int main(){
    int n=3;
    int r=2;
    int combi=fact(n)/(fact(r)*fact(n-r));
    cout<<combi;
}