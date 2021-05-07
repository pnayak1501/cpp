// reverse a sentence using stacks

#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string s){
    stack<string> st;
    string temp="";
 
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            st.push(temp);
            temp="";         
        }
        else{
            temp=temp+s[i];
        }
    }
 
    st.push(temp);
 
    while(!st.empty()) {
    temp=st.top();
    cout<<temp<<" ";
    st.pop();
  }
  cout<<endl;

}

int main(){

    string s = "Hey, how are you doing?";
    reverseSentence(s);
    return 0;

}
