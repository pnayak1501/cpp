// reverse stack

#include<iostream>
#include<stack>
using namespace std;

stack<int> reverseStack(stack<int> s1){
    stack<int> s2;
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    return s2;
}

void display(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main(){

    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    display(s1);
    s1 = reverseStack(s1);
    display(s1);
    return 0;

}
