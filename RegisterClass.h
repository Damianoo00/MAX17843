#pragma once
#include <stdint.h>
#include <cmath>
namespace max17843
{

class Register
{
public:
    uint16_t iRegister;
    uint16_t iAddress;
    Register(const uint16_t address) : iAddress(address), iRegister(0) {}
    uint16_t get(uint16_t startBit, uint16_t lengthBitSet)
    {
        const uint16_t mask = ((uint16_t)pow(2, lengthBitSet) - 1) << startBit;
        return iRegister & mask >> startBit;
    }
    void set(uint16_t startBit, uint16_t lenghBitset, uint16_t val)
    {
        const uint16_t mask = ((uint16_t)pow(2, lenghBitset) - 1) << startBit;
        iRegister &= (~mask);
        iRegister |= val << startBit;
    }

public:
    void sendRegister();
    void reciveRegister();
};
}