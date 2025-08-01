#include<bits/stdc++.h>
using namespace std;
class Stack {
private:
    int top, arr[100];

public:
    Stack() : top(-1) {}

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == 99;
    }

    void push(int x) {
        if (!isFull()) arr[++top] = x;
    }

    int pop() {
        if (!isEmpty()) return arr[top--];
        return -1;
    }

    int peek() {
        return (isEmpty()) ? -1 : arr[top];
    }
};
int main(){
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<"Popped element is : " << s.pop() << endl;
	cout<<"Peek element is : " << s.peek() << endl;
	if(s.isEmpty()) cout<<"Stack is empty." << endl;
	else cout<<"Stack is not empty." << endl;
	if(s.isFull()) cout<<"Stack is full" << endl;
	else cout<<"Stack is not full" << endl;
}
