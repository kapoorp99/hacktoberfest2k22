#include<iostream>
#include<ostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class SSL{
    private:
    struct node{
    int item;
    node *next;
    };
    node * start;
    public:
    SSL();  //Constructor
    ~SSL(); //Destructor

    void deleteAtFirst();
    void deleteAtLast();
    void deleteNode(int value);
    void insertAtLast(int data);
    void insertAtFirst(int data);
    void insertAfterNode(int value,int data);
    void viewList();
};
//Constructor
SSL::SSL(){
        start=NULL;
    }
//Destructor
SSL::~SSL()
{
    while(start)
        deleteAtFirst();
}
//view list
void SSL::viewList()
{
    cout<<endl;
    node *t;
    t=start;
    while(t)
    {
        cout<<t->item<<" ->";
        t=t->next;
    }
}
//Delete a particular node
void SSL::deleteNode(int value)
{
    node *t1,*t2;
    t1=start;
    t2=NULL;
    while(t1)
    {
        if(t1->item==value)
            break;
        t2=t1;
        t1=t1->next;
    }
        if(t1==NULL)
            cout<<"Value not found";
        else
        {
            if(t2==NULL)
                start=t1->next;
            else
                t2->next=t1->next;
            delete t1;
        }
}
//Insert After a given node
void SSL::insertAfterNode(int value,int data)
{
    node *t;
    t=start;
    while(t)
    {
        if(t->item==value)
            break;
        t=t->next;
    }
    if(t!=NULL)
    {
        node * n=new node;
        n->item=data;
        n->next=t->next;
        t->next=n;
    }
    else
    cout<<"Value not found";
}

//Delete At First
void SSL::deleteAtFirst(){
node *t;
 if(start==NULL){
    cout<<"List is empty";
 }
 else{
    t=start;
    start=t->next;
    delete t;
 }

}
//Delete At Last
void SSL::deleteAtLast(){
   node *t1,*t2;
   if(start==NULL)
    {
    cout<<"List is empty";
    }
   else
    {
        t1=start;
        t2=NULL;
        while(t1->next!=NULL)
        {
            t2=t1;
            t1=t1->next;
        }
        if(t2==NULL)
        {
            start=NULL;
        }
        else
        {
            t2->next=NULL;
        }
        delete t1;
   }
}

//Insert At Last
void SSL:: insertAtLast(int data){
    node *n = new node;
    node *t;
    n->item=data;
    n->next=NULL;
    if(start==NULL){
        start=n;
    }
    else{
    t=start;
        while(t->next!=NULL){
          t=t->next;
        }
        t->next=n;
    }
}
//Insert At First
void SSL::insertAtFirst(int data){
    node *n = new node;
    n->item=data;
    n->next=start;
    start=n;
}
int menu()
{
    int n;
    cout<<"\n1.Insert at first:: "<<endl;
    cout<<"\n2.Insert at last:: "<<endl;
    cout<<"\n3.Insert after node:: "<<endl;
    cout<<"\n4.Delete at first:: "<<endl;
    cout<<"\n5.Delete at last:: "<<endl;
    cout<<"\n6.Delete node:: "<<endl;
    cout<<"\n7. Quit"<<endl;
    cout<<"\nEnter your choice::"<<endl;
    cin>>n;
    return n;
}


int main()
{
    SSL s;
    s.insertAtFirst(10);
    s.insertAtLast(20);
    s.insertAtLast(30);
    s.insertAtFirst(40);
    s.insertAfterNode(20,100);
    s.viewList();
    s.deleteAtFirst();
    s.deleteAtLast();
    s.deleteNode(20);
    s.viewList();

}

