//Print divisors of N

#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

// //Optimal approach
// // O(sqrt(n)
// )

// vector<int> get_divisor(int n){
//     int sqrtnum = sqrt(n);
//     vector<int> divisor;
//     for(int i=1;i<=sqrtnum;i++){
//         if(n%i==0){
//             divisor.push_back(i);

//             if(i!=n/i){
//                 divisor.push_back(n/i);
//             }
//         }
//     }
//     sort(divisor.begin(),divisor.end());
//     return divisor;

// }

// int main(){
//     int n;
//     cin>>n;
//     vector <int> divisors = get_divisor(n);
//     for(int d:divisors){
//         cout<<d<<" ";
//     }
//     return 0;
// }



