#pragma once
#include <stdint.h>
namespace max17843
{
    class Register
    {

    public:
        uint16_t iRegister{0};
        uint8_t iAddress{0};
        Register(const uint8_t address) : iRegister(0), iAddress(address) {}
        static Register &Instance();

    protected:
        uint16_t get(uint16_t startBit, uint16_t lengthBitSet);
        void set(uint16_t startBit, uint16_t lenghBitset, uint16_t val);
    };
}