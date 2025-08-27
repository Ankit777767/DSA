#include<bits/stdc++.h>
using namespace std;

bool prinF(int i,int arr[],int n,vector<int>&db,int s,int sum){
    if(i==n){
        if(s==sum){
            for(auto it:db){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
            
        }
        else return false;
        
        
    }
    db.push_back(arr[i]);
    s+=arr[i];
    if(prinF(i+1,arr,n,db,s,sum)==true)   return true;
    
    s-=arr[i];
    db.pop_back();

    if(prinF(i+1,arr,n,db,s,sum)==true)  return true;
    else return false;


}

//Print onre , take exaple 2, so just print subsequence of sum 2;
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[1]);
    vector<int> db;
    prinF(0,arr,n,db,0,5);
    return 0;
}