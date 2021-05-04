// biggest number in the string

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {

    string str = "0980483980345";

    int m = 0;
    int c;
    for(int i=0;i<str.size();i++){
        c = str[i]-'0';
        m = max(m,c);
    }
    cout<<m;
    return 0;
}
