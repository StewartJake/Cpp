// ask for a person's name and greet that person
#include <iostream>
#include <string>

int main()
{
    // ask for the person's name
    std::cout << "Please enter your name: ";

    // read the name
    std::string name;
    std::cin >> name;

    // write greeting
    std::cout << "Hello, " << name << '!' << std::endl;
    return 0;
}
