// Write a program with a function to swap the values of 2 given integer variables

#include<iostream>
using namespace std;
// pass by reference
void correct_swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
 int a,b;
 cin>>a>>b;
 cout<<"Before swap: "<<endl;
 cout<<"a= "<<a<<endl;
 cout<<"b= "<<b<<endl; 
 correct_swap(&a,&b);
 cout<<"After swap: "<<endl;
 cout<<"a= "<<a<<endl;
 cout<<"b= "<<b<<endl;
 return 0;
}
