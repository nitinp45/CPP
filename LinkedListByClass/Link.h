struct Node
{
    int data;
    struct Node *next;
};

class LinkedList
{
     Node *head;
     public :
     LinkedList();
     int insertAtBeg(int data);
     int insertAtEnd(int data);
     void deleteAtEnd();
     void deleteAtBeg();
     void Display();
     int TotalNode();
     Node * SearchNode(int data);

};
