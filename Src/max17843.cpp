#pragma once
#include "../Inc/max17843.h"
namespace max17843
{
    VersionRegister &VersionRegister::Instance()
    {
        static VersionRegister _instance(0x00);
        return _instance;
    }
    AddressRegister &AddressRegister::Instance()
    {
        static AddressRegister _instance(0x01);
        return _instance;
    }
    StatusRegister &StatusRegister::Instance()
    {
        static StatusRegister _instance(0x02);
        return _instance;
    }
    Fmea1Register &Fmea1Register::Instance()
    {
        static Fmea1Register _instance(0x03);
        return _instance;
    }
    AlrtcellRegister &AlrtcellRegister::Instance()
    {
        static AlrtcellRegister _instance(0x04);
        return _instance;
    }
    AlrtovcellRegister &AlrtovcellRegister::Instance()
    {
        static AlrtovcellRegister _instance(0x05);
        return _instance;
    }
    AlrtuvcellRegister &AlrtuvcellRegister::Instance()
    {
        static AlrtuvcellRegister _instance(0x07);
        return _instance;
    }
    AlrtbalswRegister &AlrtbalswRegister::Instance()
    {
        static AlrtbalswRegister _instance(0x08);
        return _instance;
    }
    MinmaxcellRegister &MinmaxcellRegister::Instance()
    {
        static MinmaxcellRegister _instance(0x0A);
        return _instance;
    }
    Fmea2Register &Fmea2Register::Instance()
    {
        static Fmea2Register _instance(0x0B);
        return _instance;
    }
    AutobalswdisRegister &AutobalswdisRegister::Instance()
    {
        static AutobalswdisRegister _instance(0x0C);
        return _instance;
    }
    Id1Register &Id1Register::Instance()
    {
        static Id1Register _instance(0x0D);
        return _instance;
    }
    Id2Register &Id2Register::Instance()
    {
        static Id2Register _instance(0x0E);
        return _instance;
    }
    Devcfg1Register &Devcfg1Register::Instance()
    {
        static Devcfg1Register _instance(0x10);
        return _instance;
    }
    GpioRegister &GpioRegister::Instance()
    {
        static GpioRegister _instance(0x11);
        return _instance;
    }
    MeasureenRegister &MeasureenRegister::Instance()
    {
        static MeasureenRegister _instance(0x12);
        return _instance;
    }
    ScanctrlRegister &ScanctrlRegister::Instance()
    {
        static ScanctrlRegister _instance(0x13);
        return _instance;
    }
    AlrtovenRegister &AlrtovenRegister::Instance()
    {
        static AlrtovenRegister _instance(0x14);
        return _instance;
    }
    AlrtuvenRegister &AlrtuvenRegister::Instance()
    {
        static AlrtuvenRegister _instance(0x15);
        return _instance;
    }
    WatchdogRegister &WatchdogRegister::Instance()
    {
        static WatchdogRegister _instance(0x18);
        return _instance;
    }
    AcqcfgRegister &AcqcfgRegister::Instance()
    {
        static AcqcfgRegister _instance(0x19);
        return _instance;
    }
    BalswenRegister &BalswenRegister::Instance()
    {
        static BalswenRegister _instance(0x1A);
        return _instance;
    }
    Devcfg2Register &Devcfg2Register::Instance()
    {
        static Devcfg2Register _instance(0x1B);
        return _instance;
    }
    Baldiagcfg1Register &Baldiagcfg1Register::Instance()
    {
        static Baldiagcfg1Register _instance(0x1C);
        return _instance;
    }
    BalswdchgRegister &BalswdchgRegister::Instance()
    {
        static BalswdchgRegister _instance(0x1D);
        return _instance;
    }
    TopcellRegister &TopcellRegister::Instance()
    {
        static TopcellRegister _instance(0x1E);
        return _instance;
    }
    CellRegister1 &CellRegister1::Instance()
    {
        static CellRegister1 _instance(0x20);
        return _instance;
    }
    CellRegister2 &CellRegister2::Instance()
    {
        static CellRegister2 _instance(0x21);
        return _instance;
    }
    CellRegister3 &CellRegister3::Instance()
    {
        static CellRegister3 _instance(0x22);
        return _instance;
    }
    CellRegister4 &CellRegister4::Instance()
    {
        static CellRegister4 _instance(0x23);
        return _instance;
    }
    CellRegister5 &CellRegister5::Instance()
    {
        static CellRegister5 _instance(0x24);
        return _instance;
    }
    CellRegister6 &CellRegister6::Instance()
    {
        static CellRegister6 _instance(0x25);
        return _instance;
    }
    CellRegister7 &CellRegister7::Instance()
    {
        static CellRegister7 _instance(0x26);
        return _instance;
    }
    CellRegister8 &CellRegister8::Instance()
    {
        static CellRegister8 _instance(0x27);
        return _instance;
    }
    CellRegister9 &CellRegister9::Instance()
    {
        static CellRegister9 _instance(0x28);
        return _instance;
    }
    CellRegister10 &CellRegister10::Instance()
    {
        static CellRegister10 _instance(0x29);
        return _instance;
    }
    CellRegister11 &CellRegister11::Instance()
    {
        static CellRegister11 _instance(0x2A);
        return _instance;
    }
    CellRegister12 &CellRegister12::Instance()
    {
        static CellRegister12 _instance(0x2B);
        return _instance;
    }
    VblockRegister &VblockRegister::Instance()
    {
        static VblockRegister _instance(0x2C);
        return _instance;
    }
    Ain1Register &Ain1Register::Instance()
    {
        static Ain1Register _instance(0x2D);
        return _instance;
    }
    Ain2Register &Ain2Register::Instance()
    {
        static Ain2Register _instance(0x2E);
        return _instance;
    }
    TotalRegister &TotalRegister::Instance()
    {
        static TotalRegister _instance(0x2F);
        return _instance;
    }
    OvthclrRegister &OvthclrRegister::Instance()
    {
        static OvthclrRegister _instance(0x40);
        return _instance;
    }
    OvthsetRegister &OvthsetRegister::Instance()
    {
        static OvthsetRegister _instance(0x42);
        return _instance;
    }
    UvthclrRegister &UvthclrRegister::Instance()
    {
        static UvthclrRegister _instance(0x44);
        return _instance;
    }
    UvthsetRegister &UvthsetRegister::Instance()
    {
        static UvthsetRegister _instance(0x46);
        return _instance;
    }
    MsmtchRegister &MsmtchRegister::Instance()
    {
        static MsmtchRegister _instance(0x48);
        return _instance;
    }
    AinotRegister &AinotRegister::Instance()
    {
        static AinotRegister _instance(0x49);
        return _instance;
    }
    AinutRegister &AinutRegister::Instance()
    {
        static AinutRegister _instance(0x4A);
        return _instance;
    }
    BalshrtthrRegister &BalshrtthrRegister::Instance()
    {
        static BalshrtthrRegister _instance(0x4B);
        return _instance;
    }
    BallowthrRegister &BallowthrRegister::Instance()
    {
        static BallowthrRegister _instance(0x4C);
        return _instance;
    }
    BalhighthrRegister &BalhighthrRegister::Instance()
    {
        static BalhighthrRegister _instance(0x4D);
        return _instance;
    }
    DiagRegister &DiagRegister::Instance()
    {
        static DiagRegister _instance(0x50);
        return _instance;
    }
    DiagcfgRegister &DiagcfgRegister::Instance()
    {
        static DiagcfgRegister _instance(0x51);
        return _instance;
    }
    CtstenRegister &CtstenRegister::Instance()
    {
        static CtstenRegister _instance(0x52);
        return _instance;
    }
    Adctest1aRegister &Adctest1aRegister::Instance()
    {
        static Adctest1aRegister _instance(0x57);
        return _instance;
    }
    Adctest1bRegister &Adctest1bRegister::Instance()
    {
        static Adctest1bRegister _instance(0x58);
        return _instance;
    }
    Adctest2aRegister &Adctest2aRegister::Instance()
    {
        static Adctest2aRegister _instance(0x59);
        return _instance;
    }
    Adctest2bRegister &Adctest2bRegister::Instance()
    {
        static Adctest2bRegister _instance(0x5A
        );
        return _instance;
    }
}