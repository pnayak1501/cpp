// Queue basics

#include<iostream>
#include<queue> 

using namespace std;

void display(queue<int> q){
    cout<<"DISPLAY :";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    display(q);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
    return 0;

}
