#pragma once
#include "RegisterClass.h"
namespace max17843
{
    class VersionRegister : public Register
    {
    public:
        Bits VER;
        Bits MOD;
        VersionRegister(const uint8_t address) : Register(address), VER(0, 4), MOD(4, 12) {}
    };

    class AddressRegister : public Register
    {
    public:
        Bits AD;
        Bits FA;
        AddressRegister(const uint8_t address) : Register(address), AD(0, 5), FA(8, 5) {}
    };

    class StatusRegister : public Register
    {
    public:
        Bits ALRTFMEA1;
        Bits ALRTFMEA2;
        Bits ALRTPAR;
        Bits ALRTMAN;
        Bits ALRTPEC;
        Bits ALRTTHOT;
        Bits ALRTTCOLD;
        Bits ALRTMSMTCH;
        Bits ALRTSHDNLRT;
        Bits ALRTSHDNL;
        Bits ALRTUV;
        Bits ALRTOV;
        Bits ALRTRST;
        StatusRegister(const uint8_t address) : Register(address), ALRTFMEA1(0, 1), ALRTFMEA2(1, 1), ALRTPAR(2, 1), ALRTMAN(4, 1), ALRTPEC(7, 1), ALRTTHOT(8, 1), ALRTTCOLD(9, 1), ALRTMSMTCH(10, 1), ALRTSHDNLRT(11, 1), ALRTSHDNL(12, 1), ALRTUV(13, 1), ALRTOV(14, 1), ALRTRST(15, 1) {}
    };

    class Fmea1Register : public Register
    {
    public:
        Bits ALRTGNDL1;
        Bits ALRTVDDL1;
        Bits ALRTGNDL3;
        Bits ALRTHVUV;
        Bits ALRTTEMP;
        Bits ALRTBALSW;
        Bits ALRTGNDL2;
        Bits ALRTVDDL2;
        Bits ALRTVDDL3;
        Bits ALRTCOMMSEL2;
        Bits ALRTCOMMSEU2;
        Bits ALRTCOMMSEL1;
        Bits ALRTCOMMSEU1;
        Bits ALRTOSC2;
        Bits ALRTOSC1;
        Fmea1Register(const uint8_t address) : Register(address), ALRTGNDL1(0, 1), ALRTVDDL1(1, 1), ALRTGNDL3(2, 1), ALRTHVUV(3, 1), ALRTTEMP(4, 1),
                                               ALRTBALSW(5, 1), ALRTGNDL2(6, 1), ALRTVDDL2(7, 1), ALRTVDDL3(8, 1), ALRTCOMMSEL2(9, 1), ALRTCOMMSEU2(10, 1), ALRTCOMMSEL1(11, 1),
                                               ALRTCOMMSEU1(12, 1), ALRTOSC2(14, 1), ALRTOSC1(15, 1) {}
    };

    class AlrtcellRegister : public Register
    {
    public:
        Bits ALRTCELL;
        Bits ALRTAIN0;
        Bits ALRTAIN1;
        AlrtcellRegister(const uint8_t address) : Register(address), ALRTCELL(0, 12), ALRTAIN0(12, 1), ALRTAIN1(13, 1) {}
    };

    class AlrtovcellRegister : public Register
    {
    public:
        Bits ALRTOV;
        Bits ALRTOVAIN0;
        Bits ALRTOVAIN1;
        AlrtovcellRegister(const uint8_t address) : Register(address), ALRTOV(0, 12), ALRTOVAIN0(12, 1), ALRTOVAIN1(13, 1) {}
    };

    class AlrtuvcellRegister : public Register
    {
    public:
        Bits ALRTUV;
        Bits ALRTUVAIN0;
        Bits ALRTUVAIN1;
        AlrtuvcellRegister(const uint8_t address) : Register(address), ALRTUV(0, 12), ALRTUVAIN0(12, 1), ALRTUVAIN1(13, 1) {}
    };

    class AlrtbalswRegister : public Register
    {
    public:
        Bits ALRTBALSW;
        AlrtbalswRegister(const uint8_t address) : Register(address), ALRTBALSW(0, 12) {}
    };

    class MinmaxcellRegister : public Register
    {
    public:
        Bits MINCELL;
        Bits MAXCELL;
        MinmaxcellRegister(const uint8_t address) : Register(address), MINCELL(0, 4), MAXCELL(8, 4) {}
    };

    class Fmea2Register : public Register
    {
    public:
        Bits ALRTHVOV;
        Bits ALRTHVHDRM;
        Fmea2Register(const uint8_t address) : Register(address), ALRTHVOV(0, 1), ALRTHVHDRM(2, 1) {}
    };

    class AutobalswdisRegister : public Register
    {
    public:
        Bits CellRecoveryTime;
        Bits DiagnosticRecorveryTime;
        AutobalswdisRegister(const uint8_t address) : Register(address), CellRecoveryTime(0, 8), DiagnosticRecorveryTime(8, 8) {}
    };

    class Id1Register : public Register
    {
    public:
        Bits DEVID;
        Id1Register(const uint8_t address) : Register(address), DEVID(0, 15) {}
    };

    class Id2Register : public Register
    {
    public:
        Bits DEVID;
        Bits ROMCRC;
        Id2Register(const uint8_t address) : Register(address), DEVID(0, 8), ROMCRC(8, 8) {}
    };

    class Devcfg1Register : public Register
    {
    public:
        Bits SPOR;
        Bits ADDRUNLOCK;
        Bits NOPEC;
        Bits BALSWDISABLE;
        Bits SCANTODIS;
        Bits ADCTSTEN;
        Bits ALIVECNTEN;
        Bits FORCEPOR;
        Bits HVCPDIS;
        Bits EMGCYDCHG;
        Bits FC;
        Bits ADCSELECT;
        Bits POLARITY;
        Devcfg1Register(const uint8_t address) : Register(address), SPOR(0, 1), ADDRUNLOCK(1, 1),
                                                 NOPEC(2, 1), BALSWDISABLE(3, 1), SCANTODIS(4, 1), ADCTSTEN(5, 1), ALIVECNTEN(6, 1),
                                                 FORCEPOR(7, 1), HVCPDIS(9, 1), EMGCYDCHG(10, 1), FC(11, 3), ADCSELECT(14, 1), POLARITY(15, 1) {}
    };

    class GpioRegister : public Register
    {
    public:
        Bits DRV;
        Bits GPIO3TMR;
        Bits RD;
        Bits DIR;
        GpioRegister(const uint8_t address) : Register(address), DRV(0, 3), GPIO3TMR(7, 1), RD(8, 4), DIR(12, 4) {}
    };

    class MeasureenRegister : public Register
    {
    public:
        Bits CELLEN;
        Bits AIN1EN;
        Bits AIN2EN;
        Bits BLOCKEN;
        Bits BLKCONNECT;
        MeasureenRegister(const uint8_t address) : Register(address), CELLEN(0, 12), AIN1EN(12, 1), AIN2EN(13, 1), BLOCKEN(14, 1), BLKCONNECT(15, 1) {}
    };

    class ScanctrlRegister : public Register
    {
    public:
        Bits SCAN;
        Bits FILTDONE;
        Bits SCANMODE;
        Bits AMENDFILT;
        Bits OVSAMPL;
        Bits RDFILT;
        Bits BALSWDIAG;
        Bits AUTOBALSWDIS;
        Bits DELAYSEL;
        Bits DATARDY;
        Bits SCANTIMEOUT;
        Bits SCANDONE;
        ScanctrlRegister(const uint8_t address) : Register(address), SCAN(0, 1), FILTDONE(1, 1), SCANMODE(2, 1), AMENDFILT(3, 1), OVSAMPL(4, 3), RDFILT(7, 1), BALSWDIAG(8, 3), AUTOBALSWDIS(11, 1), DELAYSEL(12, 1), DATARDY(13, 1), SCANTIMEOUT(14, 1), SCANDONE(14, 1) {}
    };

    class AlrtovenRegister : public Register
    {
    public:
        Bits OVALRTEN;
        Bits AINOVALRTEN0;
        Bits AINOVALRTEN1;
        AlrtovenRegister(const uint8_t address) : Register(address), OVALRTEN(0, 12), AINOVALRTEN0(12, 1), AINOVALRTEN1(13, 1) {}
    };

    class AlrtuvenRegister : public Register
    {
    public:
        Bits UVALRTEN;
        Bits AINUVALRTEN0;
        Bits AINUVALRTEN1;
        AlrtuvenRegister(const uint8_t address) : Register(address), UVALRTEN(0, 12), AINUVALRTEN0(12, 1), AINUVALRTEN1(13, 1) {}
    };

    class WatchdogRegister : public Register
    {
    public:
        Bits CBTIMER;
        Bits CBPDIV;
        WatchdogRegister(const uint8_t address) : Register(address), CBTIMER(8, 4), CBPDIV(12, 4) {}
    };

    class AcqcfgRegister : public Register
    {
    public:
        Bits AINTIME;
        Bits THRMMODE;
        AcqcfgRegister(const uint8_t address) : Register(address), AINTIME(0, 5), THRMMODE(8, 2) {}
    };

    class BalswenRegister : public Register
    {
    public:
        Bits BALSWEN;
        BalswenRegister(const uint8_t address) : Register(address), BALSWEN(0, 12) {}
    };

    class Devcfg2Register : public Register
    {
    public:
        Bits TXUIDLEHIZ;
        Bits TXLIDLEHIZ;
        Bits TXADPEN;
        Bits LASTLOOP;
        Devcfg2Register(const uint8_t address) : Register(address), TXUIDLEHIZ(10, 1), TXLIDLEHIZ(11, 1), TXADPEN(14, 1), LASTLOOP(15, 1) {}
    };

    class Baldiagcfg1Register : public Register
    {
    public:
        Bits CELLEN_M;
        Bits POLARITY_M;
        Bits ALTMUXSEL_M;
        Baldiagcfg1Register(const uint8_t address) : Register(address), CELLEN_M(0, 12), POLARITY_M(12, 1), ALTMUXSEL_M(13, 1) {}
    };

    class BalswdchgRegister : public Register
    {
    public:
        Bits DCHGTIME;
        Bits DCHGCNTR;
        Bits DCHGWIN;
        BalswdchgRegister(const uint8_t address) : Register(address), DCHGTIME(0, 8), DCHGCNTR(8, 4), DCHGWIN(13, 3) {}
    };

    class TopcellRegister : public Register
    {
    public:
        Bits TOPCELL;
        TopcellRegister(const uint8_t address) : Register(address), TOPCELL(0, 4) {}
    };

    class CellRegister : public Register
    {
    public:
        Bits CELLn;
        CellRegister(const uint8_t address) : Register(address), CELLn(0, 16) {}
    };

    class VblockRegister : public Register
    {
    public:
        Bits VBLOCK;
        VblockRegister(const uint8_t address) : Register(address), VBLOCK(0, 16) {}
    };

    class Ain1Register : public Register
    {
    public:
        Bits AIN1;
        Ain1Register(const uint8_t address) : Register(address), AIN1(0, 16) {}
    };

    class Ain2Register : public Register
    {
    public:
        Bits AIN2;
        Ain2Register(const uint8_t address) : Register(address), AIN2(0, 16) {}
    };

    class TotalRegister : public Register
    {
    public:
        Bits SUM;
        TotalRegister(const uint8_t address) : Register(address), SUM(0, 16) {}
    };

    class OvthclrRegister : public Register
    {
    public:
        Bits OVTHCLR;
        OvthclrRegister(const uint8_t address) : Register(address), OVTHCLR(0, 16) {}
    };

    class OvthsetRegister : public Register
    {
    public:
        Bits OVTHSET;
        OvthsetRegister(const uint8_t address) : Register(address), OVTHSET(0, 16) {}
    };

    class UvthclrRegister : public Register
    {
    public:
        Bits UVTHCLR;
        UvthclrRegister(const uint8_t address) : Register(address), UVTHCLR(0, 16) {}
    };

    class UvthsetRegister : public Register
    {
    public:
        Bits UVTHSET;
        UvthsetRegister(const uint8_t address) : Register(address), UVTHSET(0, 16) {}
    };

    class MsmtchRegister : public Register
    {
    public:
        Bits MSMTCH;
        MsmtchRegister(const uint8_t address) : Register(address), MSMTCH(0, 16) {}
    };

    class AinotRegister : public Register
    {
    public:
        Bits AINOT;
        AinotRegister(const uint8_t address) : Register(address), AINOT(0, 16) {}
    };

    class AinutRegister : public Register
    {
    public:
        Bits AINUT;
        AinutRegister(const uint8_t address) : Register(address), AINUT(0, 16) {}
    };

    class BalshrtthrRegister : public Register
    {
    public:
        Bits BALSHRTTHR;
        BalshrtthrRegister(const uint8_t address) : Register(address), BALSHRTTHR(0, 16) {}
    };

    class BallowthrRegister : public Register
    {
    public:
        Bits BALLOWTHR;
        BallowthrRegister(const uint8_t address) : Register(address), BALLOWTHR(0, 16) {}
    };

    class BalhighthrRegister : public Register
    {
    public:
        Bits BALHIGHTHR;
        BalhighthrRegister(const uint8_t address) : Register(address), BALHIGHTHR(0, 16) {}
    };

    class DiagRegister : public Register
    {
    public:
        Bits DIAG;
        DiagRegister(const uint8_t address) : Register(address), DIAG(0, 16) {}
    };

    class DiagcfgRegister : public Register
    {
    public:
        Bits DIAGSEL;
        Bits ALTMUXSEL;
        Bits MUXDIAGEN;
        Bits MUXDIAGPAIR;
        Bits MUXDIAGBUS;
        Bits AUXINTSTEN;
        Bits CTSTSRC;
        Bits CTSTDAC;
        DiagcfgRegister(const uint8_t address) : Register(address), DIAGSEL(0, 3), ALTMUXSEL(3, 1), MUXDIAGEN(4, 1), MUXDIAGPAIR(6, 1),
                                                 MUXDIAGBUS(7, 1), AUXINTSTEN(8, 2), CTSTSRC(11, 1), CTSTDAC(12, 4) {}
    };

    class CtstenRegister : public Register
    {
    public:
        Bits CTSTEN;
        CtstenRegister(const uint8_t address) : Register(address), CTSTEN(0, 13) {}
    };

    class Adctest1aRegister : public Register
    {
    public:
        Bits ADCTEST1A;
        Adctest1aRegister(const uint8_t address) : Register(address), ADCTEST1A(0, 12) {}
    };

    class Adctest1bRegister : public Register
    {
    public:
        Bits ADCTEST1B;
        Adctest1bRegister(const uint8_t address) : Register(address), ADCTEST1B(0, 12) {}
    };

    class Adctest2aRegister : public Register
    {
    public:
        Bits ADCTEST2A;
        Adctest2aRegister(const uint8_t address) : Register(address), ADCTEST2A(0, 12) {}
    };

    class Adctest2bRegister : public Register
    {
    public:
        Bits ADCTEST2B;
        Adctest2bRegister(const uint8_t address) : Register(address), ADCTEST2B(0, 12) {}
    };
}