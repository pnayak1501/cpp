// adjacency matrix

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    vector<vector<int>> v( n+1 , vector<int> (n+1, 0));
    int a;
    for(int i=0;i<m;i++){
        int x, y;
        cin>>x>>y;
        v[x][y] = 1;
        v[y][x] = 1;
    }

    for(int i=1; i<n+1; i++){
        for(int j=1; j<n+1; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
