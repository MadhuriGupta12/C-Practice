#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter your string   ";
    cin>>str;
    int n=str.length();

    reverse(str.begin(),str.end()-n/2);
    cout<<str;
}