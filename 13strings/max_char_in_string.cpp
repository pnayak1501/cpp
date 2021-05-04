// max occuring character in a string 

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {

    string s = "kndkfkjdjlfdlkslfk";

    int freq[26] = {0};

    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }

    char ans;
    int maxF = 0;
    for(int i=0; i<26;i++){
        if(freq[i]>maxF){
            maxF = freq[i];
            ans = i+'a';
        }
    }

    cout<<ans<<" - "<<maxF;
    return 0;
}
