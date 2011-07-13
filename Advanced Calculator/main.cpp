#include <iostream>
#include <string>

using namespace std;

int GetNumbers()
{
    cout << "Please Enter A Number" << endl;
    int value;
    cin >> value;
    return value;
}

char GetOperation()
{
    cout << "Please Enter + _ * /" << endl;
    char chOperation;
    cin >> chOperation;
    return chOperation;
}

int WorkOut(int x, char chOperation, int y)
{
    if (chOperation=='+')
        return x + y;

    if (chOperation=='-')
        return x - y;

    if (chOperation=='*')
        return x * y;

    if (chOperation=='/')
        return x / y;

    return 1;
}

void print(int printR)
{
    cout << "You're answer is " << print << endl;
    cin.ignore();
}

int main()
{
    int nom1 = GetNumbers();
    char operation = GetOperation();
    int nom2 = GetNumbers();
    int printR = WorkOut(nom1, operation, nom2);
    print(printR);
    return 0;
}
