// malloc usage
#include <stdlib.h>
#include <iostream>
using namespace std;

#define MAX 10
int stackSize = 0;

// creating a stack
struct stack
{
    int items[MAX];
    int top;
};

typedef struct stack st;

void createEmptyStack(st *s)
{
    s->top = -1;
}

bool isfull(st *s)
{
    if (s->top == MAX - 1)
        return true;
    else
        return false;
}

void push(st *s, int newItem)
{
    if (isfull(s))
    {
        cout << "STACK IS FULL";
    }
    else
    {
        s->top++;
        s->items[s->top] = newItem;
    }
    stackSize++;
}

void printStack(st *s){
    cout<<"Stack: ";
    for (int i=0; i<stackSize;i++){
        cout<<s->items[i]<<" ";
    }
    cout<<endl;
}

bool isEmpty(st *s){
    if(s->top==-1)
        return true;
    else
        return false;
}

void pop(st *s){
    if(isEmpty(s)){
        cout<<"\n STACK EMPTY \n";
    }else {
        cout<<"Item popped= "<<s->items[s->top];
        s->top --;
    }
    stackSize--;
    cout<<endl;
    
}

int main()
{
    int ch;
    st *s = (st *)malloc(sizeof(st));
    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s);
    pop(s);
    printStack(s);

    return 0;
}
