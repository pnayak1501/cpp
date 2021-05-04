// form the biggest no from the numeric string 

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {

    string str = "498723659";
    sort(str.begin(), str.end(), greater<int>());
    cout<<str<<endl;

    return 0;
}
