#pragma once
#include <stdint.h>
namespace max17843
{
    class Bits
    {
    public:
        uint16_t startBit;
        uint16_t length;
        Bits(const uint16_t startBit, const uint16_t length) : startBit(startBit), length(length) {}
    };

    class Register
    {
    public:
        uint8_t address;
        Register(const uint8_t address) : address(address) {}
    };
}