#include <iostream>
#include <string>
#include "F.h"

using namespace std;

int workOut(int x, char chOperation, int y)     // int x, char chOperation, int y. int x is made and replaced from number 1 same with y. char gets what operation your doing the other is self explitory.
{
    if (chOperation=='+')
    return x + y;

    if (chOperation=='-')
    return x - y;

    if (chOperation=='*')
    return x * y;

    if (chOperation=='/')
    return x / y;

    return 0;
}
