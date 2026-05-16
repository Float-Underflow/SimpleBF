#ifndef SIMPLEBF_SIMPLEBF_H
#define SIMPLEBF_SIMPLEBF_H

#include <cstdint>
#include <string>

class SimpleBF
{
private:
    uint8_t cells[30000] = {};
    unsigned cellIndex = 0;
public:
    void Interpret(const std::string& source);
};


#endif //SIMPLEBF_SIMPLEBF_H