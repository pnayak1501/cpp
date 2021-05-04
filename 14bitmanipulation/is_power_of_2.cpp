// Is power of 2 

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getBit(int n, int pos){
    return (n & (1<<pos) != 0);
}

int main() {

    int n;
    cin>>n;
    if(n == (n&((2*n)-1))){
        cout<<"Power of 2"<<endl;
    }
    else{
        cout<<"Not a power of 2"<<endl;
    }

    return 0;
}
