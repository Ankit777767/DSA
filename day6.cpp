//Prime number
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i==0&&i!=n){
            cout<<"not prime";
            break;
        }
        
        if(i==n){
            cout<<"prime";
        }
    }
    return 0;
}