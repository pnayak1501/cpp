// Check pythagorean triplet

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool check(int x, int y, int z){
    int a = max(x, max(y,z));
    int b,c;
    
    if(a==x){
        b = y;
        c = z;
    }else if(a==y){
        b = x;
        c = z;
    }else{
        b = x;
        c = y;
    }
    if(a*a == b*b+c*c)
        return true;
    return false;
}

int main(){
 int a,b,c;
 cin>>a>>b>>c;
 if(check(a,b,c))
    cout<<"a,b,c is a pythagorean triplet";
 else
    cout<<"a,b,c is not a pythagorean triplet";
 
 return 0;
}
