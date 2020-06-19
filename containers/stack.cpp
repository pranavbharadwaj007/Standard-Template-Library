#include<iostream>
#include<stack>
using namespace std;
void Print(stack<int>s){
while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}
}
int main(){
    stack<int>s;
    s.push(4);
    s.push(7);
    s.push(56);
    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;
    Print(s);
}