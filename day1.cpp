#include<bits/stdc++.h>
using namespace std;

//pairs
void explainPair(){
    pair<int,int> p = {1,4};
    // cout<<p.first<<" "<<p.second;
    pair<int,pair<int,int>> q = {9,{4,49}};
    // cout<<q.first<<" "<<q.second.first;
    pair<int,int> arr[] ={{4,5},{6,7},{8,9}};
    cout<<arr[2].first;
}

//Vectors
void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.emplace_back(4);
    cout<<v[2];
    vector<pair<int,int>> vec;
    vec.emplace_back(3,5);
    cout<<vec[0].first;
    vector<int> v1(5);
    cout<<v1[4];
    //printing the entiree vectr
    for(vector<int>::iterator i=v.begin();i!=v.end();i++){
        cout<<*(i);
    }
    // Many more functions are there for vectors, but not going to write all, just know use case
    //insert,erase,empty,auto,like these,pop_back,size()
}

//iterators
//lists
void explainList(){
    list<int> ls;
    
}

void explainSet(){
    set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(10);
    //auto
    auto it = s.find(12);
    cout<<*(it);
    

}

void explainMap(){
    map<int,int> mp;
    // key, value pair

}

int main(){
    //explainPair();
    explainSet();
    return 0;
}

