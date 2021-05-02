// Array basics
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    // int arr[4] = {0,1,2,3};
    // cout<<arr[3];
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
