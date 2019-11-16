// takes in a stream of numbers and finds quartiles

#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;     using std::setprecision;
using std::cout;    using std::string;
using std::endl;    using std::streamsize;
using std::sort;    using std::vector;

int main()
{
    // ask for number stream
    cout << "Enter all of the numbers in the group, "
        "followed by end-of-file: ";

    // variable into which to read
    double x;
    vector<double> numbers;

    // invariant:
    // numbers contains all grades read so far
    while (cin >> x)
        numbers.push_back(x);

    typedef vector<double>::size_type vec_sz;
    vec_sz full_size = numbers.size();

    // check that vector not empty
    if (numbers.empty())
    {
        cout << endl << "No numbers input. Exiting" << endl;
        return 1;
    }

    sort(numbers.begin(), numbers.end());
    
    vec_sz full_mid = full_size / 2;
    vector<double>::const_iterator first = numbers.begin();
    vector<double>::const_iterator last = numbers.begin() + full_mid;
    vector<double> first_half(first, last);
    first = last;
    last = numbers.end();
    vector<double> final_half(first, last);
    
    vec_sz first_size = first_half.size();
    vec_sz final_size = final_half.size();
    vec_sz first_mid = first_half.size() / 2;
    vec_sz final_mid = final_half.size() / 2;

    double med;
    double q1;
    double q3;
    med = full_size % 2 == 0 ? (numbers[full_mid] + numbers[full_mid - 1]) / 2
                                :numbers[full_mid];
    q1 = first_size % 2 == 0 ? (numbers[first_mid] + numbers[first_mid - 1]) / 2
                                :numbers[first_mid];
    q3 = final_size % 2 == 0 ? (numbers[final_mid] + numbers[final_mid - 1]) / 2
                                :numbers[final_mid];
    
    streamsize prec = cout.precision();
    cout << setprecision(3) << "Q1  is " << q1 << endl;
    cout << "Med is " << med << endl;
    cout << "Q3  is " << q3  << endl;
    cout << setprecision(prec);

    // if (size % 2 == 0)
    // {
    //     
    // // write result
    // streamsize prec = cout.precision();
    // cout << "Your final grade is " << setprecision(3)
    //      << 0.2 * midterm + 0.4 * final + 0.4 * avg 
    //      << setprecision(prec) << endl;
    return 0;
}
