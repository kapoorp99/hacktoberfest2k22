#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class DLL
{
private:
    struct node
    {
        int item;
        node *prev,*next;
    };
    node *start;
public:
    DLL();
    ~DLL();
    void insertFirst(int data);
    void insertLast(int data);
    void insertAfter(int value,int data);
    void deleteFirst();
    void deleteLast();
    void deleteNode(int value);
    void viewList();
    void searchItem(int value);
};

//Constructor
DLL::DLL()
{
    start=NULL;
}
//Destructor
DLL::~DLL()
{
    while(start!=NULL)
    {
        deleteFirst();
    }
}
void DLL::insertFirst(int data)
{
    node *n;
    n=new node;
    n->prev=NULL;
    n->item=data;
    n->next=start;
    if(start)
        start->prev=n;
    start=n;
}
//insert at last
void DLL::insertLast(int data)
{
    node *n;
    n=new node;
    node *t;
    n->item=data;
    n->next=NULL;
        if(start==NULL)
        {
            n->prev=NULL;
            start=n;
        }
        else
        {
            t=start;
            while(t->next!=NULL)
            {
                t=t->next;
            }
            n->prev=t;
            t->next=n;
        }
}
//insert after
void DLL::insertAfter(int value,int data)
{
        node *t1;
        t1=start;
        while(t1)
        {
            if(t1->item==value)
                break;
            t1=t1->next;
        }
        if(t1!=NULL)
        {
            node *n=new node;
            n->item=data;
            n->prev=t1;
            n->next=t1->next;
            if(t1->next!=NULL)
            {
             t1->next->prev=n;
             t1->next=n;
            }
        }
        else
        {
            cout<<"Value not found";
        }
}
//delete first
void DLL::deleteFirst()
{
   if(start!=NULL)
   {
    node *t;
    t=start;
    start=t->next;
    if(t->next!=NULL)
        t->next->prev=NULL;
    delete t;
   }
   else
    cout<<"List is empty";
}
//delete last
void DLL::deleteLast()
{
    node *t1,*t2;
    t1=start;
    t2=NULL;
    if(t1!=NULL)
    {
        while(t1->next!=NULL)
        {
            t2=t1;
            t1=t1->next;
        }
        if(t2!=NULL)
            t2->next=NULL;
        else
            start=NULL;
        delete t1;
    }
    else
    {
        cout<<"List is empty";
    }
}
// delete node
void DLL::deleteNode(int value)
{
    node *t;
    t=start;
    while(t!=NULL)
    {
        if(t->item==value)
            break;
        t=t->next;
    }
    if(t!=NULL)
    {
        if(t->prev!=NULL)
        {
            t->prev->next=t->next;
        }
        else{
            start=t->next;
            if(t->next!=NULL)
                t->next->prev=NULL;
        }

        if(t->next!=NULL)
        {
            t->next->prev=t->prev;
        }
        delete t;
    }
    else
        cout<<"Value not found or List is empty";

}
//view list
void DLL::viewList()
{
    node *t;
    t=start;
    cout<<endl;
    while(t)
    {
        cout<<t->item<<" ";
        t=t->next;
    }
}
//search item
void DLL::searchItem(int value)
{
    node *t;
    t=start;
    while(t)
    {
        if(t->item==value)
        {
            cout<<"\nValue Found\n";
            break;
        }
        t=t->next;
    }
    if(t==NULL)
     cout<<"\nValue Not Found\n";
}
int main()
{
    DLL dll;
    dll.insertLast(40);
    dll.insertLast(50);
    dll.insertLast(60);
    //dll.viewList();
    dll.deleteNode(0);
    dll.viewList();
}
