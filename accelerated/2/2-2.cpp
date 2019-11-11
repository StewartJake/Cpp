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
    const int h_pad = 20;
    const int v_pad = 1;

    // number of rows and columns
    const int rows = h_pad * 2 + 3;
    const string::size_type cols = greeting.size() + v_pad * 2 + 2;

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
            if (r == h_pad + 1 && c == v_pad + 1)
            {
                cout << greeting;
                c += greeting.size();
            }
            else
            {
                // on border?
                if (r == 0 || r == rows - 1 ||
                    c == 0 || c == cols - 1)
                    cout << '*';
                else
                    cout << ' ';
                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}
