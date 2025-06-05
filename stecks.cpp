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
    
    void peek(){
        if(isEmpty())
        {
            cout << "List is empty" << endl;
            return;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " <<endl;
                current = current->next;
            }
            cout << endl;
        }
    }
};
    int main(){
        stack stack;

        int choice = 0;
        int value;

        while (choice != 4)
        {
            cout << "1. push\n";
            cout << "2. pop\n";
            cout << "3. peek\n";
            cout << "4. exit\n";
            cout << "enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Enter the value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.peek();
                break;
            
            }
        }
    };