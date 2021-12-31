#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void push(int x)
{
    node *t = new node();
    if (t == NULL)
    {
        cout << "overflow";
    }
    else
    {
        t->data = x;
        t->next = head;
        head = t;
    }
}
void pop()
{
    if (head == NULL)
    {
        cout << "underflow";
    }
    else
    {
        head = head->next;
    }
}

void display()
{
    struct node *ptr;
    if (head == NULL)
    {
        cout << "stack is empty";
    }
    else
    {
        ptr = head;
        cout << ptr->data;
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{
    int ch, val;
    void push(int), pop(), diaplay();
    do
    {
        cout << "1.Push\n";
        cout << "2.Pop\n";
        cout << "3.display\n";
        cout << "4.Exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the value to be inserted: ";
            cin >> val;
            push(val);
            break;
        case 2:
            cout << "Element deleted!";
            pop();
            break;

        case 3:
            cout << "elements are :\n";
            display();
            break;

        default:
            cout << "Wrong Input";
            break;
        }
    } while (ch != 4);
    return 0;
}