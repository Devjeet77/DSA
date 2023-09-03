#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void
print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtHead(Node* &head, Node*&tail, int data){
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
        //LL not empty
        //Step1: create a node
        Node* newNode= new Node(data);
        //step 2: point the next of the new node to head
        newNode->next=head;
        //step 3: point the prev of head to new node
        head->prev=newNode;
        //step 4: make the new node as head
        head= newNode;
    }
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node* head= first;
    Node*tail=third;


    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    insertAtHead(head, tail, 101);
    print(head);

    return 0;
}