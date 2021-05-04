// Largest word in a sentence

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();
    int i = 0;
    int curr = 0;
    int maxLen = 0;

    while(arr[i]!='\0'){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(curr > maxLen){
                maxLen = curr;
            }
            curr = 0;
        }
        else{
        curr++;
        }
        i++;
    }

    cout<<maxLen<<endl;

    return 0;
}
