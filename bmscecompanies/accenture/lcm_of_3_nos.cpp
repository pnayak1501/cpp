// Find LCM of three numbers

#include<iostream>
#include "bits/stdc++.h"

using namespace std;

int lcm(int x,int y, int z)
{
    long max,lcom, count, flag=0;
    if(x>=y&&x>=z)
            max=x;
    else if(y>=x&&y>=z)
            max=y;
    else if(z>=x&&z>=y)
            max=z;
    for(count=1;flag==0;count++)
    {
            lcom=max*count;
            if(lcom%x==0 && lcom%y==0 && lcom%z==0)
            {
                    flag=1;
            }
    }
    return lcom;
}

int main()
{
    
        int a,b,c;
        int LCM;
        cout<<"Enter 1st number: ";
        cin>>a;
        cout<<"Enter 2nd number: ";
        cin>>b;
        cout<<"Enter 3rd number: ";
        cin>>c;
        LCM = lcm(a,b,c);
        cout<<"LCM of "<<a<<","<<b<<","<<c<<" is = "<<LCM<<endl;
        return 0;
    
}
