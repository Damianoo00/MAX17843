#pragma once
#include "Registers.h"
namespace max17843
{
     VersionRegister VERSION(( uint8_t)0x00);           // Device model and version address
     AddressRegister ADDRESS(( uint8_t)0x01);           // Device addresses address                                             // namespace ADDRESS
     StatusRegister STATUS(( uint8_t)0x02);             // Status flags address
     Fmea1Register FMEA1(( uint8_t)0x03);               // Failure mode flags 1 address
     AlrtcellRegister ALRTCELL(( uint8_t)0x04);         // Voltage-fault alert flags address
     AlrtovcellRegister ALRTOVCELL(( uint8_t)0x05);     // Overvoltage alert flags address
     AlrtuvcellRegister ALRTUVCELL(( uint8_t)0x07);     // Undervoltage alert flags address
                                                                  //  Register AlrtbalswRegister : public Register{
     AlrtbalswRegister ALRTBALSW(( uint8_t)0x08);       // Balancing switch alert flags address
     MinmaxcellRegister MINMAXCELL(( uint8_t)0x0A);     // Cell number for the highest and lowest voltages measured address
     Fmea2Register FMEA2(( uint8_t)0x0B);               // Failure mode flags 2 address
     AutobalswdisRegister AUTOBALSWDIS(( uint8_t)0x0C); // AUTOBALSWDIS Delay Register address
     Id1Register ID1(( uint8_t)0x0D);                   // Device ID 1 address
     Id2Register ID2(( uint8_t)0x0E);                   // Device ID 2 address
     Devcfg1Register DEVCFG1(( uint8_t)0x10);           // Device configuration 1 address
     GpioRegister GPIO(( uint8_t)0x11);                 // GPIO status and configuration address
     MeasureenRegister MEASUREEN(( uint8_t)0x12);       // Measurement enables address
     ScanctrlRegister SCANCTRL(( uint8_t)0x13);         // Acquisition control and status addres
     AlrtovenRegister ALRTOVEN(( uint8_t)0x14);         // Overvoltage alert enables address
     AlrtuvenRegister ALRTUVEN(( uint8_t)0x15);         // Undervoltage alert enables address
     WatchdogRegister TIMERCFG(( uint8_t)0x18);         // Timer configuration address
     AcqcfgRegister ACQCFG(( uint8_t)0x19);             // Acquisition configuration address
     BalswenRegister BALSWEN(( uint8_t)0x1A);           // Balancing switch enables address
     Devcfg2Register DEVCFG2(( uint8_t)0x1B);           // Device configuration 2 address
     Baldiagcfg1Register BALDIAGCFG1(( uint8_t)0x1C);   // Balancing diagnostic configuration address
     BalswdchgRegister BALSWDCHG(( uint8_t)0x1D);       // Balancing switch discharge configuration address
     TopcellRegister TOPCELL(( uint8_t)0x1E);           // Top cell configuration address
     CellRegister CELL1(( uint8_t)0x20);                // Cell 1 measurement result address
     CellRegister CELL2(( uint8_t)0x21);                // Cell 2 measurement result address
     CellRegister CELL3(( uint8_t)0x22);                // Cell 3 measurement result address
     CellRegister CELL4(( uint8_t)0x23);                // Cell 4 measurement result address
     CellRegister CELL5(( uint8_t)0x24);                // Cell 5 measurement result address
     CellRegister CELL6(( uint8_t)0x25);                // Cell 6 measurement result address
     CellRegister CELL7(( uint8_t)0x26);                // Cell 7 measurement result address
     CellRegister CELL8(( uint8_t)0x27);                // Cell 8 measurement result address
     CellRegister CELL9(( uint8_t)0x28);                // Cell 9 measurement result address
     CellRegister CELL10(( uint8_t)0x29);               // Cell 10 measurement result address
     CellRegister CELL11(( uint8_t)0x2A);               // Cell 11 measurement result address
     CellRegister CELL12(( uint8_t)0x2B);               // Cell 12 measurement result address
     VblockRegister BLOCK(( uint8_t)0x2C);              // block measurement result address
     Ain1Register AIN1(( uint8_t)0x2D);                 // AUXIN1 measurement result address
     Ain2Register AIN2(( uint8_t)0x2E);                 // AUXIN2 measurement result address
     TotalRegister TOTAL(( uint8_t)0x2F);               // Sum of all cell measurements address
     OvthclrRegister OVTHCLR(( uint8_t)0x40);           // Cell overvoltage clear threshold address
     OvthsetRegister OVTHSET(( uint8_t)0x42);           // Cell overvoltage set threshold address
     UvthclrRegister UVTHCLR(( uint8_t)0x44);           // Cell undervoltage clear threshold address
     UvthsetRegister UVTHSET(( uint8_t)0x46);           // Cell undervoltage set threshold address
     MsmtchRegister MSMTCH(( uint8_t)0x48);             // Cell mismatch threshold address
     AinotRegister AINOT(( uint8_t)0x49);               // AUXIN overtemperature threshold address
     AinutRegister AINUT(( uint8_t)0x4A);               // AUXIN undertemperature threshold address
     BalshrtthrRegister BALSHRTTHR(( uint8_t)0x4B);     // Balancing switch diagnostic, short-circuit threshold address
     BallowthrRegister BALLOWTHR(( uint8_t)0x4C);       // Balancing switch diagnostic, on-state low threshold address
     BalhighthrRegister BALHIGHTHR(( uint8_t)0x4D);     // Balancing switch diagnostic, on-state high threshold address
     DiagRegister DIAG(( uint8_t)0x50);                 // Diagnostic measurement result address
     DiagcfgRegister DIAGCFG(( uint8_t)0x51);           // Diagnostic configuration address
     CtstenRegister CTSTCFG(( uint8_t)0x52);            // Test source configuration address
     Adctest1aRegister ADCTEST1A(( uint8_t)0x57);       // User-specified data for ALU diagnostic address
     Adctest1bRegister ADCTEST1B(( uint8_t)0x58);       // User-specified data for ALU diagnostic address
     Adctest2aRegister ADCTEST2A(( uint8_t)0x59);       // User-specified data for ALU diagnostic address
     Adctest2bRegister ADCTEST2B(( uint8_t)0x5A);       // User-specified data for ALU diagnostic address
}
