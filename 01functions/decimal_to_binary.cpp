// converting decimal number into binary number

#include<iostream>
using namespace std ;

 int pow(int a,int b)
 {
     int ans=1;
     if (b == 0)
     {
         return ans;
     }
     else if (b > 0){
     for(int j=1; j<=b ; j++)
     {
         ans*=a;
     }
     return ans;
     }
 }

int main()
{
    int n,rem,i,ans=0;
    cout << "Enter Decimal Number\n" ;
    cin >> n;
    i=0;

    while (n!=0)
    {
        rem = n%2;
        ans += rem*pow(10,i);
        n=n/2;
        i++;
    }
    cout << ans ;
}
