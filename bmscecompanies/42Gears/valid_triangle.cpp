// Given 3 angles which belong to a triangle, check whether these angles make a valid triangle or not

#include<iostream>
#include "bits/stdc++.h"

using namespace std;

int main(){

    int a,b,c;
    cout<<"Enter the three ansgles:";
    cin>>a>>b>>c;
    if(a+b+c == 180){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;

}
