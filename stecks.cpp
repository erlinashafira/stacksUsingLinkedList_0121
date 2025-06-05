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
}