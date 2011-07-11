// tells the compiler what libary it is
#include <iostream>
//always needed
int main()
{
    //Small bits of the libary
    using namespace std;
    //declare X
    int x;
    // show on console Please enter a number: and move to new line
    cout << "Please enter a number: " << endl;
    // input is = to x
    cin >> x;
    // show on screen X and move to new line
    cout << "you entered " << x << endl;
    // return 0
    return 0;

}
