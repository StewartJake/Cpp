// asks the user for two numbers
// recites back the larger number
#include <iostream>

using std::cin;     using std::endl;
using std::cout;

int input_check()
{
    cout << "Please enter a number" << endl;
    int number;
    while (! (cin >> number))
    {
        cout << "Invalid input. Please enter an integer." << endl;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    return number;
}

int main()
{
    int number1 = input_check();
    int number2 = input_check();
    int larger = (number1 > number2) ? number1 : number2;
    cout << "The larger number is " << larger << endl;
    return 0;
}
