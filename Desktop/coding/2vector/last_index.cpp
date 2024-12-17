#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(6);
    v.push_back(4);
    v.push_back(8);

    int n=v.size();
    int idx;
    for(int i=0;i<n;i++){
        if(v[i]==8)idx=i;
    }
    cout<<idx;

}
