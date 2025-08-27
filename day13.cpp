//WAP to count the number of subsequences having sum=x

#include<bits/stdc++.h>
using namespace std;
int printC(int i,int arr[],int n,int s,int sum){
    if(i==n){
        if(s==sum){
            return 1;
        }
        else return 0;
    }
    s+=arr[i];
    int l=printC(i+1,arr,n,s,sum);
    s-=arr[i];
    int r=printC(i+1,arr,n,s,sum);
    return l + r;

}
int main(){
    int arr[] = {1,1,1,3};
    int sum=3;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<printC(0,arr,n,0,sum);
    return 0;
}