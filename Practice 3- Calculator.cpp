// Practice 3- Calculator
// Josh T
// Version 1.1.0 uploaded to github on 9-3-21

#include <iostream>

using namespace std;

int main()
{
    int c;
    float a, b, d;
    cout << "----------------------------------------" << endl
        << "-----Welcome to Joshie's Calculator-----" << endl
        << "-----------------V 1.1------------------" << endl
        << "----------------------------------------" << endl << endl;

    cout << "Enter your first number.\n";
    cin >> a;
    cout << "Enter your second number.\n";
    cin >> b;
    cout << "Choose a operation. (+ is 1,- is 2,* is 3, or / is 4)\n";
    cin >> c;
    if (c == 1) {
        d = a + b;
    }
    else if (c == 2) {
        d = a - b;
    }
    else if (c == 3) {
        d = a * b;
    }
    else if (c == 4) {
        d = float(a) / float(b);
    }

    cout << d << endl;

    return 0;
}
