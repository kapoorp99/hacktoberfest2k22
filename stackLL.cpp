#include<iostream>
#include<conio.h>
using namespace std;
class stack
{
private:
    struct node{
     int item;
     node *next;
    };
public:
    node *top;
    stack();
    //~stack();
    void push(int data);
    void pop();
    void view(); //we can not use view method only can get access only top or peek of the stack
    void peek();
    bool isEmpty();
};
//is Empty
bool stack::isEmpty()
{
    return (top==NULL);
}

//Peek
void stack::peek()
{
    if(!isEmpty())
    {
        cout<<top->item;
    }
    else
    {
        cout<<"Underflow\n";
    }
}
//constructor
stack::stack()
{
    top=NULL;
}
//destructor
/*
stack::~stack()
{
    while(top!=NULL)
        pop();
}
*/
//push
void stack::push(int data)
{
    node *n;
    n=new node;
    n->item=data;
    n->next=NULL;
    if(top==NULL)
    {
        top=n;
    }
    else
    {
       n->next=top;
       top=n;
    }
}
//pop
void stack::pop()
{
    if(top==NULL)
    {
        cout<<"Underflow\n";
    }
    else
    {
        node *t;
        t=top;
        cout<<"\nThe top element of stack is :: "<<top->item<<"\n";
        top=top->next;
        delete t;
        //view();
    }
}
//view
void stack::view()
{
    if(top==NULL)
        cout<<"Underflow\n";
    else{
        node *t;
        t=top;
        while(t!=NULL)
        {
          cout<<t->item<<" ";
          t=t->next;
        }
    }
}
int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.view();
    s.pop();
    s.view();
}
