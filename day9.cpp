#include<bits/stdc++.h>
using namespace std;

//N to 1 by backtracking
//1 to n
void f(int i,int n){
    
    if(i==0){
        return;
    }
    
    f(i-1,n);
    cout<<i<<" ";


}
void sum(int i,int S=0){
    if(i<1){
        cout<<S<<endl;
        return;
    }
    sum(i-1,S+i);
}


int main(){
    int n=5;
    sum(n);
    return 0;
}