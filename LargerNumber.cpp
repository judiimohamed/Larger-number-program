// ConsoleApplication58.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program reads two numbers from the user
// and prints the larger one

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "enter the first number:";
    cin >> num1;
    cout << "enter the second number:";
    cin >> num2;

    if (num1 > num2)
    {
        cout << "the larger number is:" << num1 << endl;
    }
    else if (num2 > num1)
    {
        cout << "the larger number is:" << num2 << endl;
    }
    else
    {
        cout << "both numbers are equal:" << num1 << endl;
    }

    return 0;

    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
