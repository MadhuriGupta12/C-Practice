#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    string s,t;
    cout<<"enter your s string   ";
    cin>>s;
    cout<<"enter your t string   ";
    cin>>t;

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)cout<<"yes its is anagram";
    else cout<<"it is not anagram";
}