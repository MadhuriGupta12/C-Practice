#include<iostream>
using namespace std;
int main(){
    int n=4;
//1 2 3 4
//1 2 3 4
//1 2 3 4
//1 2 3 4

    for(int i =1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

//1
//1 2
//1 2 3
//1 2 3 4

  for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

// 1
// 1 3
// 1 3 5
// 1 3 5 7

 for(int i =1;i<=n;i++){
        for(int j=1;j<=2*i;j=j+2){
            cout<<j<<" ";
        }
        cout<<endl;
    }

// A B C D
// A B C D
// A B C D
// A B C D

    for(int i =1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<(char)(64+j)<<" ";
        }
        cout<<endl;
    }
// 1
// 2 3
// 4 5 6
// 7 8 9 10
    int k=1;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
// 1
// 0 1
// 1 0 1
// 0 1 0 1
      
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2!=0)cout<<"0"<<" ";
            else cout<<"1"<<" ";
        }
        cout<<endl;
    }
}
