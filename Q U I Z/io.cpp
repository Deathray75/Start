#include <iostream>
#include "p.h"

using namespace std;

int Readnumber()
{
    cout << "Please Enter Number" << endl;
    int value;
    cin >> value;
    return value;
}

int Write(int value)
{
    cout << "The Answer Is " << value << endl;
}
