#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr; // array pointer 
    int top; // top of the element in the stack
    int size; // size of the array

    Stack(int size){
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data){
        if(size-top>1){
            // space avaliable
            top++;
            arr[top] = data;
        }else{
            // space not avaliable
            cout<<"Stack Overflow" << endl;
        }
    }


    void pop(){
        if(top == -1){
            // stack empty 
            cout<<"Stack underFlow cannot delete element " << endl;
        }else{
            // stack are not empty
            top--;
        }
    }


    int gettop(){
        if(top == -1){
            cout<<"there is no Element in the stack " << endl;
        }else{
            return arr[top];
        }
    }

    // number of elemnet in the stack
    int getsize(){
        return top+1;
    }

    bool isempty(){
        if(top ==-1){
            return true;
        }else{
            return false;
        }
    }

};

int main(){
    Stack s(10);
    // insercton 
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.isempty()){
        cout<<s.gettop() << " ";
        s.pop();
    }
    cout<< endl;

    cout<<"Size of the Stack is " << s.getsize() << endl;
}