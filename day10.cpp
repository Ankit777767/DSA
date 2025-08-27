// Resusrsion:
//Reversing array: using Recursion

#include<bits/stdc++.h>
using namespace std;

void f(int i,int n,int arr[]){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    f(i+1,n,arr);
}
//'check if a string is palindrome'
bool check(int i,string &s,int n){
    if(i>=n/2){
        return true;
    }
    if(s[i]==s[n-i-1]){
        check(i+1,s,n);
        
    }
    else{
        return false;
    }



}
// int main(){
//     int n;
//     n=5;
//     int arr[n]={1,5,2,8,7};
//     f(0,n,arr);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//String 

int main(){
    string name="abcdefgfedcba";
    int n=name.size();
    bool result=check(0,name,n);
    if(result==true){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    return 0;
}