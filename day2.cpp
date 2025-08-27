// Learning Patterns:

#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the rows";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// int main(){
//     int n=5;
//     // cout<<"Enter the rows";
//     //cin>>n;
//     for(int i=n;i>0;i--){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// int main(){
//     int n = 5;
    
//     for(int i=1;i<=n;i++){
//         for(int j=;j<;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j= 0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<2*i+1;k++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<=i;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<(2*n-2*i-3);k++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *


// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int k=0;k<=i;k++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     for(int i=0;i<n-1;i++){
//         for(int k=0;k<(n-i-1);k++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             if((i+j)%2==0){
//                 cout<<1<<" ";
//             }
//             else{
//                 cout<<0<<" ";
//             }
//         }
//         cout<<"\n";
//     }
//     return 0;
// }
// 1 
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

// int main(){
//     int n = 4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int k=1;k<=n+4-2*i;k++){
//             cout<<" ";
//         }
//         for(int m=i;m>0;m--){
//             cout<<m;
//         }
//         cout<<"\n";
//     }

//     return 0;
// }

// 1      1
// 12    21
// 123  321
// 12344321

// int main(){
//     int n= 5;
//     int count=65;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<(char(count))<<" ";
//         }
//         count++;


//         cout<<"\n";
//     }
//     return 0;
// }

// int main(){
//     int n=4;
//     int count=65;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<=i;k++){
//             cout<<char(count);
//             count++;
//         }
//         count=64;
        
//         for(int m=i;m>0;m--){
//             count=count+m;
//             cout<<char(count);
//             count=64;

//         }
//         count=65;
//         cout<<"\n";
//     }
//     return 0;
// }

// int main(){
//     int n = 5;
//     int count = 69;
//     int C = 69;
//     for(int i=0;i<=n;i++){
//         for(int j=i;j>0;j--){
            
//             cout<<char(count);
//             count++;
//         }
//         int temp=C;
//         count=temp;
//         C--;
//         cout<<"\n";
//     }
//     return 0;
// }


// E
// DE
// CDE
// BCDE
// ABCDE

// int main(){
//     int n=9;
//     for(int i=0;i<(2*n-1);i++){
//         for(int j=0;j<(2*n-1);j++){
//             int top=i;
//             int left=j;
//             int bott=(2*n-2)-i;
//             int right =(2*n-2)-j;
//             cout<<n-min(min(left,right),min(top,bott))<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 
// 9 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 9
// 9 8 7 7 7 7 7 7 7 7 7 7 7 7 7 8 9
// 9 8 7 6 6 6 6 6 6 6 6 6 6 6 7 8 9
// 9 8 7 6 5 5 5 5 5 5 5 5 5 6 7 8 9 
// 9 8 7 6 5 4 4 4 4 4 4 4 5 6 7 8 9
// 9 8 7 6 5 4 3 3 3 3 3 4 5 6 7 8 9
// 9 8 7 6 5 4 3 2 2 2 3 4 5 6 7 8 9
// 9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9 
// 9 8 7 6 5 4 3 2 2 2 3 4 5 6 7 8 9
// 9 8 7 6 5 4 3 3 3 3 3 4 5 6 7 8 9
// 9 8 7 6 5 4 4 4 4 4 4 4 5 6 7 8 9
// 9 8 7 6 5 5 5 5 5 5 5 5 5 6 7 8 9
// 9 8 7 6 6 6 6 6 6 6 6 6 6 6 7 8 9
// 9 8 7 7 7 7 7 7 7 7 7 7 7 7 7 8 9 
// 9 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 9
// 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9

// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==0||j==0||i==n-1||j==n-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//         }

//         }
//         cout<<"\n";

//     }
//     return 0;
// }

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int k=(2*n-2*i-2);k>0;k--){
            cout<<" ";
        }       
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0;i<n-1;i++){
        for(int j=n-i-1;j>0;j--){
            cout<<"*";
        }
        for(int k=0;k<(2*i+2);k++){
            cout<<" ";
        }
        for(int j=n-i-1;j>0;j--){
            cout<<"*";
        }

        cout<<"\n";

    }
    return 0;
}