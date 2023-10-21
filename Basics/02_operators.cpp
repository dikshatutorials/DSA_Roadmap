#include<iostream>
using namespace std;

int main()
{
    cout << "Operators in C++" << endl;
    int a = 10, b = 3;

    // Arithmetic Operators
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl; 
    cout << "a % b = " << a % b << endl;
    
    // Assignment Operators
    cout << "a++ = " << a++ << endl;
    cout << "++a = " << ++a << endl;
    cout << "a-- = " << a-- << endl;
    cout << "--a = " << --a << endl;

    // Relational Operators
    cout << "a += 2 = " << (a += 2) << endl;
    cout << "a -= 2 = " << (a -= 2) << endl;
    cout << "a *= 2 = " << (a *= 2) << endl;
    cout << "a /= 2 = " << (a /= 2) << endl;
    cout << "a %= 2 = " << (a %= 2) << endl;

    // Logical Operators
    cout << "a == b = " << (a == b) << endl;
    cout << "a != b = " << (a != b) << endl;
    cout << "a > b = " << (a > b) << endl;

    // Bitwise Operators
    cout << "a && b = " << (a && b) << endl;
    cout << "a || b = " << (a || b) << endl;
    cout << "!a = " << !a << endl;

    // Shift Operators
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << ~a << endl;
    cout << "a << 1 = " << (a << 1) << endl;


    return 0;
}