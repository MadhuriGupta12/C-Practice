#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    v.push_back(3);
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]==v[j])cout<<"dublicate are present";
            else cout<<"not present";
        }
    }
}