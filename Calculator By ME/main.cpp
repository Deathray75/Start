#include <iostream>


using namespace std;


int x;
int y;

int add(int x, int y)
{
    return x + y;
}

int main()
{
    cout << "Hello, Welcome To Calculator" << endl;
    cout << "Enter First Number" << endl;
    cin >> x;
    cout << "Enter Second Number" << endl;
    cin >> y;
    cout << "The Sum Of " << x << " And " << y << " = " << add(x,y) <<endl;
    return 0;
}
