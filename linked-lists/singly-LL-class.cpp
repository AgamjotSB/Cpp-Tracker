#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data) // constructor
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d)
{
    // new node create with data d using constructor
    Node *temp = new Node(d);
    // temp (pointer to new node's next) is pointed at the head from function arg
    temp->next = head;
    // head is now pointed at the newest node
    head = temp;
};

void insertAtTail(Node* &head, int d)
{
    Node* tailNode = new Node(d); //made new node with data d
    Node* temp = head; //temp object pointer for traversing
    // while (temp != NULL) if this is used, temp ends up as NULL
    while (temp->next != NULL) //temp now stops after pointing to null
    {
        temp = temp->next;
    };
    temp->next = tailNode;
};

void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout << temp->data <<" ";
        temp = temp-> next;
    }
    cout << endl;
};

int main()
{
    //created a new node called node1
    Node *node1 = new Node(10);
    // node 1 is pointer to the node created with data 10

//    cout << node1->data << endl;
//    cout << node1->next << endl;

    // head pointed to node1
    Node* head = node1;
    print(head);

    insertAtHead(head, 12);
    insertAtHead(head, 15);
    insertAtHead(head, 17);
    insertAtTail(head, 50);
    print(head);


}