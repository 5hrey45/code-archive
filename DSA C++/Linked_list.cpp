#include <iostream>
#include <string>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

void printList(Node *head)
{
    Node *curr = head;
    while (curr != nullptr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

Node *insert_begin(Node *head, int key)
{
    Node *temp = new Node(key);
    if (head == nullptr)
        return temp;
    temp->next = head;
    return temp;
}

int main()
{
    // Node *head = new Node(10);
    // head->next = new Node(20);
    // head->next->next = new Node(30);
    // head->next->next->next = new Node(40);

    Node *head = nullptr;
    head = insert_begin(head, 10);
    head = insert_begin(head, 20);
    head = insert_begin(head, 30);
    head = insert_begin(head, 40);

    printList(head);
}
