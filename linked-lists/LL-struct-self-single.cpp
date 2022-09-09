#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    // struct constructor
    Node(int d)
    {
        this->data = d;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    // creating new node, pointer for reference is temp
    Node *temp = new Node(d);
    // data of node set to d
    // pointer of the newest node pointed at Head
    temp->next = head;
    // head is now the newest node
    head = temp;
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};

int main()
{
    Node *node1 = new Node(10);
    // new pointer head, pointing to the topmost node
    Node *head = node1;
    int numOfInput;
    cin >> numOfInput;
    for (int i = 0; i < numOfInput; i++)
    {
        int data;
        cin >> data;
        insertAtHead(head, data);
    }
    print(head);
}