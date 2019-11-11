// ask for a person's name and creates a framed greeting 
#include <iostream>
#include <string>

using std::cin;     using std::endl;
using std::cout;    using std::string;

int main()
{
    // number of blank spaces around greeting
    cout << "Please enter desired length: ";
    int test_number;
    while (! (cin >> test_number))
    {
        cout << "Invalid entry." << endl;
        cin.clear();
        if (test_number > 20)
        {
            cout << "Length too large." << endl;
            cin.clear();
        }
        cin.ignore (1000, '\n');
    }
    const int length = test_number;
    const string stars(length, '*');
    const string space(length - 2, ' ');
    cout << endl;

    // invariant: we have written r rows so far
    for (int r = 0; r < length; ++r)
    {
        if (r == 0 || r == length - 1)
            cout << stars;
        else
        {
            cout << '*';
            cout << space;
            cout << '*' << endl;
        }
        cout << endl;
    }
    return 0;
}
