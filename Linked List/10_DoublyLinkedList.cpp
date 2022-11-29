#include <bits/stdc++.h>
using namespace std;

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;

void create(int A[], int n)
{
    struct node *temp;

    // Creation of first(head node)
    head = new node;
    head->data = A[0];
    head->prev = head->next = NULL;
    tail = head; // Since Only one element is till now in linkedList hence both the head and tail are pointing to the same node.

    for (int i = 1; i < n; i++)
    {
        temp = new node;
        temp->data = A[i];
        tail->next = temp; // Connecting the last node with this current new node
        temp->next = NULL;
        temp->prev = tail; // Connecting the current new node with last node
        tail = temp;       // Assigning this node as new last(tail) node.
    }
}
void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << "-";
        ptr = ptr->next;
    }
    cout << "NULL" << endl;
}
void displayrev(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << "-";
        ptr = ptr->prev;
    }
    cout << "NULL" << endl;
}
int main()
{
    int arr[] = {1, 3, 5, 7, 8, 10};
    create(arr, 6);
    display(head);
    displayrev(tail);
    return 0;
    return 0;
}