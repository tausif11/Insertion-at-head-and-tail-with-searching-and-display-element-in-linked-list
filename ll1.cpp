#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        this -> data = val;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head , int data)
{
    Node* temp = new Node(data);
          temp -> next = head;
          head = temp;
}

void insertAtTail(Node* &head,int val)
{

    Node* n = new Node(val);
    if(head==NULL)
    {
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp -> next;
    }
    temp -> next = n;
}

void display(Node* &head)
{
     Node* temp = head;
     while(temp != NULL)
     {
         cout<<temp -> data<<"->";
         temp = temp -> next;
     }
     cout<<"NULL";
     cout<<endl;
}

bool issearch(Node* head,int key)
    {
        Node* temp = head;
        while(temp != NULL)
        {
           if(temp -> data ==key)
           {
               return true;
           }
           temp = temp -> next;
        }
        return false;
    }

int main()
{
    Node* temp = new Node(12);
    Node* head = temp;
    insertAtHead(head , 14);
    insertAtHead(head , 16);
    insertAtHead(head , 18);
    insertAtTail(head, 20);
    display(head);
    cout<<issearch(head,20);
    return 0;
}

