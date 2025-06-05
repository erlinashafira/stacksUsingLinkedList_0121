#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class stack
{
    private:
    Node *top;

    public:
    stack(){
        top = NULL;
    }

    int push(int value)
    {
        Node *newNode = new Node(); //1. declare memory for the new node
        newNode->data = value; //2. arsip value
        newNode->next = top; //3. set the next pointer of the new node to the current
        top = newNode; //4. update pointer to the new node
        return value;
    }

    bool isEmpty(){
        return top == NULL;
    }

    void pop(){
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
            return;
        }
        cout << "popped value" << top->data << endl;
        top = top->next;
    }
    
};