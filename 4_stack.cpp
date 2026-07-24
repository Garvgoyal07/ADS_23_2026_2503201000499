#include <iostream>
using namespace std;
int top = -1;
int MAX;
void push(int stack[], int value)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow\n";
    }
    else
    {
        top++;
        stack[top] = value;
    }
}
void pop(int stack[])
{
    if (top == -1)
    {
        cout << "Stack Underflow\n";
    }
    else
    {
        cout << "Deleted Element: " << stack[top] << endl;
        top--;
    }
}
void peek(int stack[])
{
    if (top == -1)
    {
        cout << "Stack is Empty\n";
    }
    else
    {
        cout << "Top Element: " << stack[top] << endl;
    }
}
void display(int stack[])
{
    if (top == -1)
    {
        cout << "Stack is Empty\n";
    }
    else
    {
        cout << "Stack Elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    cout << "Enter Stack Size: ";
    cin >> MAX;
    int stack[MAX];
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
            push(stack, value);
            break;
        case 2:
            pop(stack);
            break;
        case 3:
            peek(stack);
            break;
        case 4:
            display(stack);
            break;
        case 5:
            cout << "Program End";
            break;
        default:
            cout << "Invalid Choice";
        }

    } while (choice != 5);

    return 0;
}