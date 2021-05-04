// Pair sum problem - Check if there exists two elements in an array such that their sum is equal to given k.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin>>n;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j;
    for(int i=0;i<n-1;i++){
        int sum = 0;
        for(j=i;j<i+2;j++){
            sum = sum + a[j];
        }
        if(sum == s){
            cout<<i<<" "<<j-1;
            return 0;
        }
    }
    cout<<"No such pair"<<endl;
    return 0;
}
