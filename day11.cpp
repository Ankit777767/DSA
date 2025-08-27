#include<bits/stdc++.h>
using namespace std;
void printF(int i,int arr[],vector<int> ds,int n){
    if(i==n){
        for(auto it:ds){
            cout<<it<<" ";

        }
        
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    //take
    printF(i+1,arr,ds,n);
    ds.push_back(arr[i]);
    //not take
    printF(i+1,arr,ds,n);
    ds.pop_back();
}
//Print all;print one and count

int main(){
    
    int arr[]={2,1,3,4};
    int n = sizeof(arr)/sizeof(arr[1]);
    vector<int> ds;
    printF(0,arr,ds,n);
    return 0;
    
}