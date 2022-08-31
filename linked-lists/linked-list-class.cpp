#include <iostream>
#include <conio.h>
#include <string>
#include <algorithm>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

void insertAtFront(Node** prev_node,int value){
Node* NewNode= new Node();
NewNode->data = value;
NewNode->next = *prev_node ;
*prev_node=NewNode;
};
void printList(Node* head){
    while (head != NULL){
        cout << " " << head -> data;
        head = head -> next;
    }
}

int main(){
    int temp;
Node* head=NULL;
insertAtFront(&head, 6);
insertAtFront(&head, 5);
insertAtFront(&head, 7);
insertAtFront(&head, 3);
printList(head);

}
