#include <fstream>
#include <iostream>
#include <sstream>

#include "SimpleBF.h"

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        std::cerr << "No input file provided.\n";
        return -1;
    }

    std::ifstream file(argv[1]);
    if (!file.is_open())
    {
        std::cerr << "Unable to open file '" << argv[1] << "'\n";
        return -1;
    }
    std::stringstream fileString;
    fileString << file.rdbuf();

    SimpleBF simpleBF;
    simpleBF.Interpret(fileString.str());

    return 0;
}
