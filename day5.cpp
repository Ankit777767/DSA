//learn hashing

#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int arr[5]={1,3,1,3,2};
//     int hash[13]={0};
//     int n=5;
//     //pre-storing
//     for(int i=0;i<n;i++){
//         hash[arr[i]]+=1;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int n;
//         cin>>n;
//         //fetch
//         cout<<hash[n]<<endl;
//     }
//     return 0;
// }

// int main(){
//     string s= "abcdabcdef";
//     int hash[26]={0};
    
//     //pre-storing
//     for(int i=0;i<s.size();i++){
//         hash[s[i]-'a']+=1;
//     }
//     int q;


//     cin>>q;
//     while(q--){
//         char n;
//         cin>>n;
//         //fetch
//         cout<<hash[n-'a']<<endl;
//     }
//     return 0;
// }

//Given an array, we have found the number of occurrences of each element in the array.
// void countfreq(int arr[],int n){
//     vector<bool> visited(n,false);
//     for(int i=0;i<n;i++){
//         if(visited[i]==true){
//             continue;
//         }
//         int count=1;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]==arr[i]){
//                 count++;
//                 visited[j]=true;

//             }
//         }
//         cout<<arr[i]<<" "<<count<<endl;
//     }

// }

void countfreq(int arr[],int n){
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
        for(auto x : map){
            cout<<x.first<<" "<<x.second<<endl;
        }
    
}
int main(){
    int arr[]={10,5,10,15,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    countfreq(arr,n);
    return 0;
}