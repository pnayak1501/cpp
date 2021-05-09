// Two sum (n complexity)

#include<iostream>
#include "bits/stdc++.h"

using namespace std;

int main(){

    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> a(n);
    for(auto &i : a){
        cin>>i;
    }
    bool found = false;
    sort(a.begin(), a.end());

    int lo = 0, hi = n-1;
    while(lo<hi){
        int current = a[lo]+a[hi];
        if(current == target){
            found = true;
        }
        if(current<target){
            lo++;
        }
        else{
            hi--;
        }
    }
    

    if(found){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;

}
