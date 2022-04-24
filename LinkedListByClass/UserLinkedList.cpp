#include "Link.h"
#include <iostream>
using namespace std;

int main()
{
    LinkedList l1;
    int choice;

    while(1)
    {
        cout<<"1]Insert beg"<<endl;
        cout<<"2]Insert end"<<endl;
        cout<<"3]Delete beg"<<endl;
        cout<<"4]Delete end"<<endl;
        cout<<"5]Search data"<<endl;

        
        cout<<"0 to exit";
        cout<<"Enter choice:";
        cin>>choice;
        if(choice==0)
        {
           break;
        }
        else
        {
            switch(choice)
            {
                 case 1:
                 {
                     int data;
                     cout<<"Enter data:";
                     cin>>data;
                     l1.insertAtBeg(data);
                     break;
                 }
                 case 2:
                 {
                     int data;
                     cout<<"Enter data:";
                     cin>>data;
                     l1.insertAtEnd(data);
                     break;
                 }
                 case 3:
                 {
                     l1.deleteAtBeg();
                     break;
                 }
                 case 4:
                 {
                      l1.deleteAtEnd();
                      break;
                 }
                 case 5:
                 {
                         int data;
                         cout<<"Enter data to find in list:";
                         cin>>data;
                         if(l1.SearchNode(data)==NULL)
                         {
                             cout<<"List is empty"<<endl;
                         }
                         else
                         {
                             cout<<"Element at the position "<<data<<" is "<<l1.SearchNode(data)->data<<endl;
                         }
                         break;    
                 }
                 
            }
        }
    }
}