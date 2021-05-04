// Number of ones in the binary representation of a number 

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int numberofones(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}


int main() {

    int n;
    cin>>n;

    cout<<"Number of ones are: "<<numberofones(n);

    return 0;
}
