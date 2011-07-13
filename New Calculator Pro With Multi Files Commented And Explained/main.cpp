#include <iostream>                                         // Iostream libary for cout and cin etc
#include "F.h"                                              // This is the header i made

using namespace std;                                        // Standard libary need for cout and cin

int main()                                                  // int main holds all of the current file in project
{
    int number1 = getNumber();                              // It holds getNumber to "number1" this is x
    char operation = getOperation();                        // Copys the charater by doing all of getOperation and copy the answer to operation
    int number2 = getNumber();                              // What Number 1 does this is y
    int printR = workOut(number1, operation, number2);      // does workOut parameters get what ever number1 and 2 is and operation and replace it with ther parameter in workOut then hold the infomation to printR
    print(printR);                                          // Parameter of what printR is and give the infomation to print
    cin.ignore();                                           // Allows you to see the answer
}
