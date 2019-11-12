// average grade calculator

#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using std::cin;     using std::setprecision;
using std::cout;    using std::string;
using std::endl;    using std::streamsize;

int main()
{
    // ask for and read name
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << '!' << endl;

    // ask for and read mid and final grades
    cout << "Please enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;

    // ask for the homework grades
    cout << "Enter all your homework grades, "
        "followed by end-of-file: ";

    // number & sum of grades so far
    int count = 0;
    double sum = 0;

    // variable into which to read
    double x;

    // invariant:
    // we have read count grades so far, &
    // sum is sum of first count grades
    while (cin >> x)
    {
        ++count;
        sum += x;
    }

    // write result
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
         << 0.2 * midterm + 0.4 * final + 0.4 * sum / count
         <<setprecision(prec) << endl;
    return 0;
}
