// Pointers basics

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int a = 10;
    int* aptr;

    aptr = &a;
    cout<<&a<<endl;
    cout<<aptr<<endl;

    cout<<*aptr<<endl;
    *aptr = 20;
    cout<<a<<endl;

    return 0;
    
}
