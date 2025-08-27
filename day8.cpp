#include<bits/stdc++.h>
using namespace std;

//SELECTION SORT
void selection_sort(int n,int arr[]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
// BUBBLE SORT

void bubble_sort(int n,int arr[]){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//INSERTION SORT

void insertion_sort(int n,int arr[]){
    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j-1]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }

        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//Merge Sort


int main(){
    int n=6;
    
    int arr[n]={13,46,24,52,20,9};
    insertion_sort(n,arr);
    return 0;
}

//TIme complexity O(n2)