#pragma once
#include "Registers.h"
namespace max17843
{
    const VersionRegister VERSION((const uint8_t)0x00);           // Device model and version address
    const AddressRegister ADDRESS((const uint8_t)0x01);           // Device addresses address                                             // namespace ADDRESS
    const StatusRegister STATUS((const uint8_t)0x02);             // Status flags address
    const Fmea1Register FMEA1((const uint8_t)0x03);               // Failure mode flags 1 address
    const AlrtcellRegister ALRTCELL((const uint8_t)0x04);         // Voltage-fault alert flags address
    const AlrtovcellRegister ALRTOVCELL((const uint8_t)0x05);     // Overvoltage alert flags address
    const AlrtuvcellRegister ALRTUVCELL((const uint8_t)0x07);     // Undervoltage alert flags address
                                                                  // const Register AlrtbalswRegister : public Register{
    const AlrtbalswRegister ALRTBALSW((const uint8_t)0x08);       // Balancing switch alert flags address
    const MinmaxcellRegister MINMAXCELL((const uint8_t)0x0A);     // Cell number for the highest and lowest voltages measured address
    const Fmea2Register FMEA2((const uint8_t)0x0B);               // Failure mode flags 2 address
    const AutobalswdisRegister AUTOBALSWDIS((const uint8_t)0x0C); // AUTOBALSWDIS Delay Register address
    const Id1Register ID1((const uint8_t)0x0D);                   // Device ID 1 address
    const Id2Register ID2((const uint8_t)0x0E);                   // Device ID 2 address
    const Devcfg1Register DEVCFG1((const uint8_t)0x10);           // Device configuration 1 address
    const GpioRegister GPIO((const uint8_t)0x11);                 // GPIO status and configuration address
    const MeasureenRegister MEASUREEN((const uint8_t)0x12);       // Measurement enables address
    const ScanctrlRegister SCANCTRL((const uint8_t)0x13);         // Acquisition control and status addres
    const AlrtovenRegister ALRTOVEN((const uint8_t)0x14);         // Overvoltage alert enables address
    const AlrtuvenRegister ALRTUVEN((const uint8_t)0x15);         // Undervoltage alert enables address
    const WatchdogRegister TIMERCFG((const uint8_t)0x18);         // Timer configuration address
    const AcqcfgRegister ACQCFG((const uint8_t)0x19);             // Acquisition configuration address
    const BalswenRegister BALSWEN((const uint8_t)0x1A);           // Balancing switch enables address
    const Devcfg2Register DEVCFG2((const uint8_t)0x1B);           // Device configuration 2 address
    const Baldiagcfg1Register BALDIAGCFG1((const uint8_t)0x1C);   // Balancing diagnostic configuration address
    const BalswdchgRegister BALSWDCHG((const uint8_t)0x1D);       // Balancing switch discharge configuration address
    const TopcellRegister TOPCELL((const uint8_t)0x1E);           // Top cell configuration address
    const CellRegister CELL1((const uint8_t)0x20);                // Cell 1 measurement result address
    const CellRegister CELL2((const uint8_t)0x21);                // Cell 2 measurement result address
    const CellRegister CELL3((const uint8_t)0x22);                // Cell 3 measurement result address
    const CellRegister CELL4((const uint8_t)0x23);                // Cell 4 measurement result address
    const CellRegister CELL5((const uint8_t)0x24);                // Cell 5 measurement result address
    const CellRegister CELL6((const uint8_t)0x25);                // Cell 6 measurement result address
    const CellRegister CELL7((const uint8_t)0x26);                // Cell 7 measurement result address
    const CellRegister CELL8((const uint8_t)0x27);                // Cell 8 measurement result address
    const CellRegister CELL9((const uint8_t)0x28);                // Cell 9 measurement result address
    const CellRegister CELL10((const uint8_t)0x29);               // Cell 10 measurement result address
    const CellRegister CELL11((const uint8_t)0x2A);               // Cell 11 measurement result address
    const CellRegister CELL12((const uint8_t)0x2B);               // Cell 12 measurement result address
    const VblockRegister BLOCK((const uint8_t)0x2C);              // block measurement result address
    const Ain1Register AIN1((const uint8_t)0x2D);                 // AUXIN1 measurement result address
    const Ain2Register AIN2((const uint8_t)0x2E);                 // AUXIN2 measurement result address
    const TotalRegister TOTAL((const uint8_t)0x2F);               // Sum of all cell measurements address
    const OvthclrRegister OVTHCLR((const uint8_t)0x40);           // Cell overvoltage clear threshold address
    const OvthsetRegister OVTHSET((const uint8_t)0x42);           // Cell overvoltage set threshold address
    const UvthclrRegister UVTHCLR((const uint8_t)0x44);           // Cell undervoltage clear threshold address
    const UvthsetRegister UVTHSET((const uint8_t)0x46);           // Cell undervoltage set threshold address
    const MsmtchRegister MSMTCH((const uint8_t)0x48);             // Cell mismatch threshold address
    const AinotRegister AINOT((const uint8_t)0x49);               // AUXIN overtemperature threshold address
    const AinutRegister AINUT((const uint8_t)0x4A);               // AUXIN undertemperature threshold address
    const BalshrtthrRegister BALSHRTTHR((const uint8_t)0x4B);     // Balancing switch diagnostic, short-circuit threshold address
    const BallowthrRegister BALLOWTHR((const uint8_t)0x4C);       // Balancing switch diagnostic, on-state low threshold address
    const BalhighthrRegister BALHIGHTHR((const uint8_t)0x4D);     // Balancing switch diagnostic, on-state high threshold address
    const DiagRegister DIAG((const uint8_t)0x50);                 // Diagnostic measurement result address
    const DiagcfgRegister DIAGCFG((const uint8_t)0x51);           // Diagnostic configuration address
    const CtstenRegister CTSTCFG((const uint8_t)0x52);            // Test source configuration address
    const Adctest1aRegister ADCTEST1A((const uint8_t)0x57);       // User-specified data for ALU diagnostic address
    const Adctest1bRegister ADCTEST1B((const uint8_t)0x58);       // User-specified data for ALU diagnostic address
    const Adctest2aRegister ADCTEST2A((const uint8_t)0x59);       // User-specified data for ALU diagnostic address
    const Adctest2bRegister ADCTEST2B((const uint8_t)0x5A);       // User-specified data for ALU diagnostic address
}
