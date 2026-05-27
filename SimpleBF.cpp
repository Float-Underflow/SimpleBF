#include "SimpleBF.h"

#include <iostream>

void SimpleBF::Interpret(const std::string& source)
{
    for (int i = 0; i < source.size(); ++i)
    {
        switch (source[i])
        {
            case '>': cellPointer++; break;
            case '<': cellPointer--; break;
            case '+': (*cellPointer)++; break;
            case '-': (*cellPointer)--; break;
            case '.': std::putchar(*cellPointer); break;
            case ',': *cellPointer = std::getchar(); break;
            case '[':
            {
                if (*cellPointer) break;

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
                if (!*cellPointer) break;

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