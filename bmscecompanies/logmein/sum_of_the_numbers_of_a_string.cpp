// For a given string "ashs100shsdh200" the output should be the sum of the two numbers which is 300

#include<iostream>
#include "bits/stdc++.h"

using namespace std;

int sum(string s){
    string a;
    int flag = 0;
    int sum = 0;
    for(int i=0; i<s.size();i++){
        flag = 0;
        a = "";
        while(s[i]>='0' && s[i]<='9'){
            a = a+s[i];
            i++;
            flag = 1;
        }
        if(flag==1){
            int num= stoi(a);
            sum = sum+num;
        }
    }
    return sum;
}

int main(){

    string s = "ashs100shsdh200";
    int ans = sum(s);
    cout<<ans;
    return 0;

}
