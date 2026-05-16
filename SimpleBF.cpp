#include "SimpleBF.h"

#include <iostream>

void SimpleBF::Interpret(const std::string& source)
{
    for (int i = 0; i < source.size(); ++i)
    {
        switch (source[i])
        {
            case '>': cellIndex++; break;
            case '<': cellIndex--; break;
            case '+': cells[cellIndex]++; break;
            case '-': cells[cellIndex]--; break;
            case '.': std::putchar(static_cast<char>(cells[cellIndex])); break;
            case ',': cells[cellIndex] = std::getchar(); break;
            case '[':
            {
                if (cells[cellIndex] != 0) break;

                ++i;
                for (int depth = 1; depth > 0; ++i)
                {
                    if (source[i] == '[') depth++;
                    else if (source[i] == ']') depth--;
                }
                --i;
                break;
            }
            case ']':
            {
                if (cells[cellIndex] == 0) break;

                --i;
                for (int depth = 1; depth > 0; --i)
                {
                    if (source[i] == '[') depth--;
                    else if (source[i] == ']') depth++;
                }
                break;
            }
            default: break;
        }
    }
}