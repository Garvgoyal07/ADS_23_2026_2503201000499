#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *top = NULL;

// Push
void push(int value)
{
    Node *newNode = new Node(value);

    newNode->next = top;
    top = newNode;

    cout << value << " Inserted Successfully\n";
}

// Pop
void pop()
{
    if (top == NULL)
    {
        cout << "Stack Underflow\n";
    }
    else
    {
        Node *temp = top;
        cout << "Deleted Element: " << temp->data << endl;
        top = top->next;
        delete temp;
    }
}

// Peek
void peek()
{
    if (top == NULL)
        cout << "Stack is Empty\n";
    else
        cout << "Top Element: " << top->data << endl;
}

// Display
void display()
{
    if (top == NULL)
    {
        cout << "Stack is Empty\n";
    }
    else
    {
        Node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main()
{
    int choice, value;

    do
    {
        cout << "\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Value: ";
            cin >> value;
            push(value);
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            cout << "Program Ended";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (choice != 5);

    return 0;
}