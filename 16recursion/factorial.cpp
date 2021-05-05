// Factorial of a number

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int fac(int n){
    if(n == 1){
        return 1;
    }
    int prevFac = fac(n-1);
    return n * prevFac;
}


int main() {

    int n;
    cin>>n;

    cout<<fac(n);

    return 0;
}
