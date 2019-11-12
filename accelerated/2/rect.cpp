// draws a rectanle 
#include <iostream>
#include <string>

using std::cin;     using std::endl;
using std::cout;    using std::string;

int main()
{
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
    const int length    = test_number;
    const int width     = length * 2;

    const string stars(width, '*');
    const string space(width - 2, ' ');
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
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}
