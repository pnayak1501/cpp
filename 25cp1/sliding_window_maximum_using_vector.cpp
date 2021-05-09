// Sliding window maximum using vector

#include<iostream>
#include<vector> 
#include<algorithm>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    for(int i=0;i<=a.size()-k;i++){
        int m = *max_element(a.begin()+i,a.begin()+i+k);
        cout<<m<<" ";
    }
    return 0;

}
