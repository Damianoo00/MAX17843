#include "../Inc/RegisterClass.h"
#include <cmath>

namespace max17843
{
    uint16_t Register::get(uint16_t startBit, uint16_t lengthBitSet)
    {
        const uint16_t mask = ((uint16_t)pow(2, lengthBitSet) - 1) << startBit;
        return (iRegister & mask) >> startBit;
    }

    void Register::set(uint16_t startBit, uint16_t lenghBitset, uint16_t val)
    {
        const uint16_t mask = ((uint16_t)pow(2, lenghBitset) - 1) << startBit;
        iRegister &= (~mask);
        iRegister |= val << startBit;
    }
}