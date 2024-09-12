#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this ->data=data;
        this ->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
    }
};

void insertAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void insertAtHead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void print(Node* &head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next; 
    }

}

void insertAtPosition(Node* &head,Node* &tail, int position, int data)
{
    Node* temp=head;
    if(position==1)
    {
        insertAtHead(head, data);
        return;
    }
    int count=1;
    while(count<position-1)
    {
        temp=temp->next;
    }

    if(temp->next==NULL)
    {
        insertAtTail(tail,data);
        return;
    }
    Node* newNode=new Node(data);


    newNode->next=temp->next;
    temp->next=newNode;
}
void deleteNode(Node* &head,Node* &tail,int position)
{
    if(position==1)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        int count=1;
        while(count<position)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        if(position==4)
        {
            prev->next=NULL;
            tail=prev;
            curr->next=NULL;
            delete curr;
            return;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main()
{
    Node* newNode= new Node(10);

    Node* head=newNode;
    Node* tail=newNode;

    insertAtHead(head,12);

    insertAtTail(tail, 20);

    insertAtPosition(head,tail,2,22);

    deleteNode(head,tail, 4);

    print(head);
}
