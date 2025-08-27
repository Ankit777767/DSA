// DSA --Armstrong Number:

#include<bits/stdc++.h>
using namespace std;

class Function{
public:
    bool IsArmstrong(int n){
        int sum = 0;
        int prev=n;
        while(n!=0){
            int temp=n%10;
            sum = sum + temp*temp*temp;
            n=n/10;


        }
        if(sum==prev){
            cout<<"true";
        }
        else{
            cout<<"false";
        }


}
};

int main(){
    Function func;
    int n;
    cin>>n;
    func.IsArmstrong(n);
    return 0;
}