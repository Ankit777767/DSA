// recursion

#include<bits/stdc++.h>
using namespace std;

//Print name n times
// int c=0;
// void print(){
//     string name="aankit";
//     cout<<name<<endl;
//     c++;
//     if (c==6){return;}
    
//     print();


// }


// int main(){
//     print();
//     return 0;
// }

//Print 1 to n using recursion

// void print(int n){
//     cout<<n<<endl;
    
//     if(n==0){return ;}
//     print(n-1);


// }


// int main(){
//     int n=10;
//     print(n);
//     return 0;
// }

//SUM , Factorial and reverse an array

// int s=1;
// void sum(int n){
//     s=s*n;
//     if(n==1){
//         cout<<s;
//         return;
//     }
//     sum(n-1);
// }

// int main(){
//     int n=5;
//     sum(n);
//     return 0;
// }

//1 printing elemetnts
//2 reverse array
//main

// void printArr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }

// void reverse(int arr[],int st,int end){
//     while(st<end){
//         swap(arr[st],arr[end]);
//         st++;
//         end--;
//     }
// }

// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     reverse(arr,0,n-1);
//     printArr(arr,n);
//     return 0;
// }

// String Palindrome or not:

bool Ispalindrome(int i,string& s){
    if(i>=s.length()/2){return true;}
    if(s[i]!=s[s.length()-i-1]){return false;}
    else{return true;}
    Ispalindrome(i+1,s);

}

int main(){
    string s="";
    bool ans = Ispalindrome(0,s);
    if (ans==true){
        cout<<"is a Palidrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}