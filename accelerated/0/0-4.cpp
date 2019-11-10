// creates hello_world.cpp
#include <iostream>
#include <fstream>

int main()
{
    std::ofstream f;
    f.open("hello_world.cpp");
    f << "// Prints \"Hello, world!\"" << std::endl;
    f << "#include <iostream>" << std::endl << std::endl;
    f << "int main()" << std::endl;
    f << '{' << std::endl;
    f << "\tstd::cout << \"Hello, world!\" << std::endl;" << std::endl;
    f << "\treturn 0;" << std::endl;
    f << '}' << std::endl;
    std::cout << "Created hello_world.cpp" << std::endl;
    f.close();
    return 0;
}
