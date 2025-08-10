#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;

    st.push(10);// push operations 
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    
    st.pop(); // remove data on top

    // check the element of the top
    cout<<"the top of the element is :" << st.top() << endl;

    // size
    cout<<"Size of the stack" << st.size() << endl;

    if(st.empty()){
        cout<<"Stack is empty";
    }else{
        cout<<"Stack is not empty" << endl;
    }


    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);


    while(!s.empty()){
        cout<<s.top() << " ";
        s.pop();
    }
    cout<< endl;
    
}