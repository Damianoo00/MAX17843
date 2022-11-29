#pragma once
#include "Registers.h"
namespace max17843
{
VersionRegister &VersionRegister::Instance()
    {
        static VersionRegister _instance();
        return _instance;
    }
AddressRegister &AddressRegister::Instance()
    {
        static AddressRegister _instance();
        return _instance;
    }
StatusRegister &StatusRegister::Instance()
    {
        static StatusRegister _instance();
        return _instance;
    }
Fmea1Register &Fmea1Register::Instance()
    {
        static Fmea1Register _instance();
        return _instance;
    }
AlrtcellRegister &AlrtcellRegister::Instance()
    {
        static AlrtcellRegister _instance();
        return _instance;
    }
AlrtovcellRegister &AlrtovcellRegister::Instance()
    {
        static AlrtovcellRegister _instance();
        return _instance;
    }
AlrtuvcellRegister &AlrtuvcellRegister::Instance()
    {
        static AlrtuvcellRegister _instance();
        return _instance;
    }
AlrtbalswRegister &AlrtbalswRegister::Instance()
    {
        static AlrtbalswRegister _instance();
        return _instance;
    }
MinmaxcellRegister &MinmaxcellRegister::Instance()
    {
        static MinmaxcellRegister _instance();
        return _instance;
    }
Fmea2Register &Fmea2Register::Instance()
    {
        static Fmea2Register _instance();
        return _instance;
    }
AutobalswdisRegister &AutobalswdisRegister::Instance()
    {
        static AutobalswdisRegister _instance();
        return _instance;
    }
Id1Register &Id1Register::Instance()
    {
        static Id1Register _instance();
        return _instance;
    }
Id2Register &Id2Register::Instance()
    {
        static Id2Register _instance();
        return _instance;
    }
Devcfg1Register &Devcfg1Register::Instance()
    {
        static Devcfg1Register _instance();
        return _instance;
    }
GpioRegister &GpioRegister::Instance()
    {
        static GpioRegister _instance();
        return _instance;
    }
MeasureenRegister &MeasureenRegister::Instance()
    {
        static MeasureenRegister _instance();
        return _instance;
    }
ScanctrlRegister &ScanctrlRegister::Instance()
    {
        static ScanctrlRegister _instance();
        return _instance;
    }
AlrtovenRegister &AlrtovenRegister::Instance()
    {
        static AlrtovenRegister _instance();
        return _instance;
    }
AlrtuvenRegister &AlrtuvenRegister::Instance()
    {
        static AlrtuvenRegister _instance();
        return _instance;
    }
WatchdogRegister &WatchdogRegister::Instance()
    {
        static WatchdogRegister _instance();
        return _instance;
    }
AcqcfgRegister &AcqcfgRegister::Instance()
    {
        static AcqcfgRegister _instance();
        return _instance;
    }
BalswenRegister &BalswenRegister::Instance()
    {
        static BalswenRegister _instance();
        return _instance;
    }
Devcfg2Register &Devcfg2Register::Instance()
    {
        static Devcfg2Register _instance();
        return _instance;
    }
Baldiagcfg1Register &Baldiagcfg1Register::Instance()
    {
        static Baldiagcfg1Register _instance();
        return _instance;
    }
BalswdchgRegister &BalswdchgRegister::Instance()
    {
        static BalswdchgRegister _instance();
        return _instance;
    }
TopcellRegister &TopcellRegister::Instance()
    {
        static TopcellRegister _instance();
        return _instance;
    }
CellRegister1 &CellRegister1::Instance()
    {
        static CellRegister1 _instance();
        return _instance;
    }
CellRegister2 &CellRegister2::Instance()
    {
        static CellRegister2 _instance();
        return _instance;
    }
CellRegister3 &CellRegister3::Instance()
    {
        static CellRegister3 _instance();
        return _instance;
    }
CellRegister4 &CellRegister4::Instance()
    {
        static CellRegister4 _instance();
        return _instance;
    }
CellRegister5 &CellRegister5::Instance()
    {
        static CellRegister5 _instance();
        return _instance;
    }
CellRegister6 &CellRegister6::Instance()
    {
        static CellRegister6 _instance();
        return _instance;
    }
CellRegister7 &CellRegister7::Instance()
    {
        static CellRegister7 _instance();
        return _instance;
    }
CellRegister8 &CellRegister8::Instance()
    {
        static CellRegister8 _instance();
        return _instance;
    }
CellRegister9 &CellRegister9::Instance()
    {
        static CellRegister9 _instance();
        return _instance;
    }
CellRegister10 &CellRegister10::Instance()
    {
        static CellRegister10 _instance();
        return _instance;
    }
CellRegister11 &CellRegister11::Instance()
    {
        static CellRegister11 _instance();
        return _instance;
    }
CellRegister12 &CellRegister12::Instance()
    {
        static CellRegister12 _instance();
        return _instance;
    }
VblockRegister &VblockRegister::Instance()
    {
        static VblockRegister _instance();
        return _instance;
    }
Ain1Register &Ain1Register::Instance()
    {
        static Ain1Register _instance();
        return _instance;
    }
Ain2Register &Ain2Register::Instance()
    {
        static Ain2Register _instance();
        return _instance;
    }
TotalRegister &TotalRegister::Instance()
    {
        static TotalRegister _instance();
        return _instance;
    }
OvthclrRegister &OvthclrRegister::Instance()
    {
        static OvthclrRegister _instance();
        return _instance;
    }
OvthsetRegister &OvthsetRegister::Instance()
    {
        static OvthsetRegister _instance();
        return _instance;
    }
UvthclrRegister &UvthclrRegister::Instance()
    {
        static UvthclrRegister _instance();
        return _instance;
    }
UvthsetRegister &UvthsetRegister::Instance()
    {
        static UvthsetRegister _instance();
        return _instance;
    }
MsmtchRegister &MsmtchRegister::Instance()
    {
        static MsmtchRegister _instance();
        return _instance;
    }
AinotRegister &AinotRegister::Instance()
    {
        static AinotRegister _instance();
        return _instance;
    }
AinutRegister &AinutRegister::Instance()
    {
        static AinutRegister _instance();
        return _instance;
    }
BalshrtthrRegister &BalshrtthrRegister::Instance()
    {
        static BalshrtthrRegister _instance();
        return _instance;
    }
BallowthrRegister &BallowthrRegister::Instance()
    {
        static BallowthrRegister _instance();
        return _instance;
    }
BalhighthrRegister &BalhighthrRegister::Instance()
    {
        static BalhighthrRegister _instance();
        return _instance;
    }
DiagRegister &DiagRegister::Instance()
    {
        static DiagRegister _instance();
        return _instance;
    }
DiagcfgRegister &DiagcfgRegister::Instance()
    {
        static DiagcfgRegister _instance();
        return _instance;
    }
CtstenRegister &CtstenRegister::Instance()
    {
        static CtstenRegister _instance();
        return _instance;
    }
Adctest1aRegister &Adctest1aRegister::Instance()
    {
        static Adctest1aRegister _instance();
        return _instance;
    }
Adctest1bRegister &Adctest1bRegister::Instance()
    {
        static Adctest1bRegister _instance();
        return _instance;
    }
Adctest2aRegister &Adctest2aRegister::Instance()
    {
        static Adctest2aRegister _instance();
        return _instance;
    }
Adctest2bRegister &Adctest2bRegister::Instance()
    {
        static Adctest2bRegister _instance();
        return _instance;
    }
}