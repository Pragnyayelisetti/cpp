#include<bits/stdc++.h>
using namespace std;

class Queue {
private:
    int rear,front,arr[100];
public:
    Queue(){
    	front = rear = -1;
	}
    bool isEmpty() {
    	return front>rear || front==-1;
    }
    bool isFull() {
        return rear == 99;
    }
    void push(int x) {
    	if(front == -1) front =0;
        else if (!isFull()) arr[++rear] = x;
    }
    int getfront(){
    	if(!isEmpty()) return arr[front];
    	else return -1;
	}
	int getrear(){
		if(!isEmpty()) return arr[rear];
		else return -1;
	}
    int pop() {
        if (!isEmpty()) return arr[front++];
        return -1;
    }
    int peek() {
        return (isEmpty()) ? -1 : arr[front];
    }
};
int main(){
	Queue q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	cout<<"Popped element is : " << q.pop() <<endl;
	cout<<"Peek element is : " << q.peek() <<endl;
	cout<<"Front in the queue is : "<<q.getfront() << endl;
	cout<<"Rear in the queue is : "<<q.getrear()<<endl;
	if(q.isEmpty()) cout<<"Queue is empty"<<endl;
	else  cout<<"Queue is not empty" <<endl;
	if(q.isFull()) cout<<"Queue is full" << endl;
	else cout<<"Queue is not full"<<endl;
	
	
}
