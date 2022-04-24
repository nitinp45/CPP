#include "Link.h"
#include <iostream>
using namespace std;
LinkedList::LinkedList()
{
    head = NULL;
}
int LinkedList::insertAtBeg(int data)
{
    Node *ne = new Node();
    if (ne == NULL)
    {
        return -1;
    }
    ne->data = data;
    ne->next == NULL;
    if (head == NULL)
    {
        head = ne;
        return 0;
    }
    else
    {
        ne->next = head;
        head = ne;
        return 0;
    }
}
int LinkedList::insertAtEnd(int data)
{
    Node *ne = new Node();
    if (ne == NULL)
    {
        return -1;
    }
    ne->data = data;
    ne->next = NULL;
    if (head == NULL)
    {
        head = ne;
        return 0;
    }
    else
    {
        Node *pt;
        while (pt->next != NULL)
        {
            pt = pt->next;
        }
        pt->next = ne;
        return 0;
    }
}

void LinkedList::deleteAtBeg()
{
    Node *tem;
    
    if (head->next == NULL)
    {
        tem = head;
        
        head = NULL;
        delete (tem);
        
    }
    else
    {
        tem = head;
        
        head = head->next;
        delete (tem);
        
    }
}
void LinkedList::deleteAtEnd()
{
    
    Node *tem;
    Node *pre, *con;
    con = head;
    if (head->next==NULL)
    {
        head=NULL;
    }
    else
    {
        while (con->next != NULL)
        {
            pre = con;
            con = con->next;
        }
        pre->next = NULL;
        tem = con;
        delete (con);
        
    }
}
void LinkedList::Display()
{
    if(head==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        Node * ptr;
        ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }

}
int LinkedList::TotalNode()
{
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        int count=0;
        Node *ptr=head;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        return count;
    }
}
Node* LinkedList::SearchNode(int position)
{
    if(position-1<0)
    {
        return NULL;
    }
    else if(position-1>TotalNode())
    {
        return NULL;
    }
    else
    {
        int count=0;
        Node *ptr=head;
        while(count<=position)
        {
           
            ptr=ptr->next;
        }
        return ptr;
    }
}