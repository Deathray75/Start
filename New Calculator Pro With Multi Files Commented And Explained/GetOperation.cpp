#include <iostream>
#include <string>
#include "F.h"

using namespace std;

char getOperation()
{
    cout << "Please Enter + - * /" << endl;     //same as GetNumber
    char chOperation;
    cin >> chOperation;
    return chOperation;
}
