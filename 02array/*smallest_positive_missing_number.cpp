/* Find the smallest positive missing number in the given array.
Example: [0, -10, 1, 3, -20], Ans = 2.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    const int N = 1e6+2;
    bool check[N] = {false};
    
    for(int i=0;i<n;i++){
        if(a[i]>0){
            check[a[i]] = true;
        }
    }
    
    for(int i=1;i<N;i++){
        if(check[i]==false){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
