#ifndef SIMPLEBF_SIMPLEBF_H
#define SIMPLEBF_SIMPLEBF_H

#include <cstdint>
#include <string>

class SimpleBF
{
private:
    uint8_t cells[30000] = {};
    uint8_t* cellPointer = cells;
public:
    void Interpret(const std::string& source);
};


#endif //SIMPLEBF_SIMPLEBF_H