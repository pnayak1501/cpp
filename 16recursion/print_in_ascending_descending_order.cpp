// Printing numbers in ascending and descending order

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void dec(int n){
    if(n == 0){
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}

void asc(int n){
    if(n==0){
        return;
    }
    asc(n-1);
    cout<<n<<endl;
}

int main() {

    int n;
    cin>>n;

    dec(n);
    asc(n);

    return 0;
}
