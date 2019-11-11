// ask for a person's name and creates a framed greeting 
#include <iostream>
#include <string>

using std::cin;     using std::endl;
using std::cout;    using std::string;

int main()
{
    cout << "Please enter your first name: ";
    string name;
    cin >> name;

    // build message
    const  string greeting = "Hello, " + name + "!";

    // number of blank spaces around greeting
    const int pad = 5;

    // number of rows and columns
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;

    // a block of spaces for empy rows
    const string spaces(cols - 2, ' ');
    const string::size_type num_spaces = spaces.size();

    // write blank line
    cout << endl;

    // invariant: we have written r rows so far
    for (int r = 0; r < rows; ++r)
    {
        string::size_type c = 0;

        // invariant: we have written c chars in row so far
        while (c != cols)
        {   
            // time to write greeting?
            if (r == pad + 1 && c == pad + 1)
            {
                cout << greeting;
                c += greeting.size();
            }
            else
            {
                // on border?
                if (r == 0 || r == rows - 1 ||
                    c == 0 || c == cols - 1)
                {
                    cout << '*';
                    ++c;
                }
                else
                {
                    if (r == pad + 1)
                    {
                        string half_space(pad, ' ');
                        cout << half_space;
                        c += pad;
                    }
                    else if (r != 0 || r != rows - 1)
                    {
                        cout << spaces;
                        c += num_spaces;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}
