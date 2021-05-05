// Generate all the substrings of a string without recursion

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void subseq(string s){

    for(int i = 0; i<s.length();i++){
        for(int j=i;j<s.length();j++){
            for(int k=i;k<=j;k++){
                cout<<s[k];
            }
            cout<<endl;
        }
    }

}

int main() {

    subseq("abc");
    return 0;
}
