#pragma once
#include "RegisterClass.h"

namespace max17843
{
    class VersionRegister : public Register
    {
    public:
        VersionRegister(const uint16_t address) : Register(address) {}

        uint16_t get_VER();
        void set_VER(uint16_t);

        uint16_t get_MOD();
        void set_MOD(uint16_t);
    };

    class AddressRegister : public Register
    {
    public:
        AddressRegister(const uint16_t address) : Register(address) {}

        uint16_t get_AD();
        void set_AD(uint16_t);

        uint16_t get_FA();
        void set_FA(uint16_t);
    };

    class StatusRegister : public Register
    {
    public:
        StatusRegister(const uint16_t address) : Register(address) {}

        uint16_t get_ALRTFMEA1();
        void set_ALRTFMEA1(uint16_t);

        uint16_t get_ALRTFMEA2();
        void set_ALRTFMEA2(uint16_t);

        uint16_t get_ALRTPAR();
        void set_ALRTPAR(uint16_t);

        uint16_t get_ALRTMAN();
        void set_ALRTMAN(uint16_t);

        uint16_t get_ALRTPEC();
        void set_ALRTPEC(uint16_t);

        uint16_t get_ALRTTHOT();
        void set_ALRTTHOT(uint16_t);

        uint16_t get_ALRTTCOLD();
        void set_ALRTTCOLD(uint16_t);

        uint16_t get_ALRTMSMTCH();
        void set_ALRTMSMTCH(uint16_t);

        uint16_t get_ALRTSHDNLRT();
        void set_ALRTSHDNLRT(uint16_t);

        uint16_t get_ALRTSHDNL();
        void set_ALRTSHDNL(uint16_t);

        uint16_t get_ALRTUV();
        void set_ALRTUV(uint16_t);

        uint16_t get_ALRTOV();
        void set_ALRTOV(uint16_t);

        uint16_t get_ALRTRST();
        void set_ALRTRST(uint16_t);
    };

    class Fmea1Register : public Register
    {
    public:
        Fmea1Register(const uint16_t address) : Register(address) {}

        uint16_t get_ALRTGNDL1();
        void set_ALRTGNDL1(uint16_t);

        uint16_t get_ALRTVDDL1();
        void set_ALRTVDDL1(uint16_t);

        uint16_t get_ALRTGNDL3();
        void set_ALRTGNDL3(uint16_t);

        uint16_t get_ALRTHVUV();
        void set_ALRTHVUV(uint16_t);

        uint16_t get_ALRTTEMP();
        void set_ALRTTEMP(uint16_t);

        uint16_t get_ALRTBALSW();
        void set_ALRTBALSW(uint16_t);

        uint16_t get_ALRTGNDL2();
        void set_ALRTGNDL2(uint16_t);

        uint16_t get_ALRTVDDL2();
        void set_ALRTVDDL2(uint16_t);

        uint16_t get_ALRTVDDL3();
        void set_ALRTVDDL3(uint16_t);

        uint16_t get_ALRTCOMMSEL2();
        void set_ALRTCOMMSEL2(uint16_t);

        uint16_t get_ALRTCOMMSEU2();
        void set_ALRTCOMMSEU2(uint16_t);

        uint16_t get_ALRTCOMMSEL1();
        void set_ALRTCOMMSEL1(uint16_t);

        uint16_t get_ALRTCOMMSEU1();
        void set_ALRTCOMMSEU1(uint16_t);

        uint16_t get_ALRTOSC2();
        void set_ALRTOSC2(uint16_t);

        uint16_t get_ALRTOSC1();
        void set_ALRTOSC1(uint16_t);
    };

    class AlrtcellRegister : public Register
    {
    public:
        AlrtcellRegister(const uint16_t address) : Register(address) {}

        uint16_t get_ALRTCELL();
        void set_ALRTCELL(uint16_t);

        uint16_t get_ALRTAIN0();
        void set_ALRTAIN0(uint16_t);

        uint16_t get_ALRTAIN1();
        void set_ALRTAIN1(uint16_t);
    };

    class AlrtovcellRegister : public Register
    {
    public:
        AlrtovcellRegister(const uint16_t address) : Register(address) {}

        uint16_t get_ALRTOV();
        void set_ALRTOV(uint16_t);

        uint16_t get_ALRTOVAIN0();
        void set_ALRTOVAIN0(uint16_t);

        uint16_t get_ALRTOVAIN1();
        void set_ALRTOVAIN1(uint16_t);
    };

    class AlrtuvcellRegister : public Register
    {
    public:
        AlrtuvcellRegister(const uint16_t address) : Register(address) {}

        uint16_t get_ALRTUV();
        void set_ALRTUV(uint16_t);

        uint16_t get_ALRTUVAIN0();
        void set_ALRTUVAIN0(uint16_t);

        uint16_t get_ALRTUVAIN1();
        void set_ALRTUVAIN1(uint16_t);
    };

    class AlrtbalswRegister : public Register
    {
    public:
        AlrtbalswRegister(const uint16_t address) : Register(address) {}

        uint16_t get_ALRTBALSW();
        void set_ALRTBALSW(uint16_t);
    };

    class MinmaxcellRegister : public Register
    {
    public:
        MinmaxcellRegister(const uint16_t address) : Register(address) {}

        uint16_t get_MINCELL();
        void set_MINCELL(uint16_t);

        uint16_t get_MAXCELL();
        void set_MAXCELL(uint16_t);
    };

    class Fmea2Register : public Register
    {
    public:
        Fmea2Register(const uint16_t address) : Register(address) {}

        uint16_t get_ALRTHVOV();
        void set_ALRTHVOV(uint16_t);

        uint16_t get_ALRTHVHDRM();
        void set_ALRTHVHDRM(uint16_t);
    };

    class AutobalswdisRegister : public Register
    {
    public:
        AutobalswdisRegister(const uint16_t address) : Register(address) {}

        uint16_t get_CellRecoveryTime();
        void set_CellRecoveryTime(uint16_t);

        uint16_t get_DiagnosticRecorveryTime();
        void set_DiagnosticRecorveryTime(uint16_t);
    };

    class Id1Register : public Register
    {
    public:
        Id1Register(const uint16_t address) : Register(address) {}

        uint16_t get_DEVID();
        void set_DEVID(uint16_t);
    };

    class Id2Register : public Register
    {
    public:
        Id2Register(const uint16_t address) : Register(address) {}

        uint16_t get_DEVID();
        void set_DEVID(uint16_t);

        uint16_t get_ROMCRC();
        void set_ROMCRC(uint16_t);
    };

    class Devcfg1Register : public Register
    {
    public:
        Devcfg1Register(const uint16_t address) : Register(address) {}

        uint16_t get_SPOR();
        void set_SPOR(uint16_t);

        uint16_t get_ADDRUNLOCK();
        void set_ADDRUNLOCK(uint16_t);

        uint16_t get_NOPEC();
        void set_NOPEC(uint16_t);

        uint16_t get_BALSWDISABLE();
        void set_BALSWDISABLE(uint16_t);

        uint16_t get_SCANTODIS();
        void set_SCANTODIS(uint16_t);

        uint16_t get_ADCTSTEN();
        void set_ADCTSTEN(uint16_t);

        uint16_t get_ALIVECNTEN();
        void set_ALIVECNTEN(uint16_t);

        uint16_t get_FORCEPOR();
        void set_FORCEPOR(uint16_t);

        uint16_t get_HVCPDIS();
        void set_HVCPDIS(uint16_t);

        uint16_t get_EMGCYDCHG();
        void set_EMGCYDCHG(uint16_t);

        uint16_t get_FC();
        void set_FC(uint16_t);

        uint16_t get_ADCSELECT();
        void set_ADCSELECT(uint16_t);

        uint16_t get_POLARITY();
        void set_POLARITY(uint16_t);
    };

    class GpioRegister : public Register
    {
    public:
        GpioRegister(const uint16_t address) : Register(address) {}

        uint16_t get_DRV();
        void set_DRV(uint16_t);

        uint16_t get_GPIO3TMR();
        void set_GPIO3TMR(uint16_t);

        uint16_t get_RD();
        void set_RD(uint16_t);

        uint16_t get_DIR();
        void set_DIR(uint16_t);
    };

    class MeasureenRegister : public Register
    {
    public:
        MeasureenRegister(const uint16_t address) : Register(address) {}

        uint16_t get_CELLEN();
        void set_CELLEN(uint16_t);

        uint16_t get_AIN1EN();
        void set_AIN1EN(uint16_t);

        uint16_t get_AIN2EN();
        void set_AIN2EN(uint16_t);

        uint16_t get_BLOCKEN();
        void set_BLOCKEN(uint16_t);

        uint16_t get_BLKCONNECT();
        void set_BLKCONNECT(uint16_t);
    };

    class ScanctrlRegister : public Register
    {
    public:
        ScanctrlRegister(const uint16_t address) : Register(address) {}

        uint16_t get_SCAN();
        void set_SCAN(uint16_t);

        uint16_t get_FILTDONE();
        void set_FILTDONE(uint16_t);

        uint16_t get_SCANMODE();
        void set_SCANMODE(uint16_t);

        uint16_t get_AMENDFILT();
        void set_AMENDFILT(uint16_t);

        uint16_t get_OVSAMPL();
        void set_OVSAMPL(uint16_t);

        uint16_t get_RDFILT();
        void set_RDFILT(uint16_t);

        uint16_t get_BALSWDIAG();
        void set_BALSWDIAG(uint16_t);

        uint16_t get_AUTOBALSWDIS();
        void set_AUTOBALSWDIS(uint16_t);

        uint16_t get_DELAYSEL();
        void set_DELAYSEL(uint16_t);

        uint16_t get_DATARDY();
        void set_DATARDY(uint16_t);

        uint16_t get_SCANTIMEOUT();
        void set_SCANTIMEOUT(uint16_t);

        uint16_t get_SCANDONE();
        void set_SCANDONE(uint16_t);
    };

    class AlrtovenRegister : public Register
    {
    public:
        AlrtovenRegister(const uint16_t address) : Register(address) {}

        uint16_t get_OVALRTEN();
        void set_OVALRTEN(uint16_t);

        uint16_t get_AINOVALRTEN0();
        void set_AINOVALRTEN0(uint16_t);

        uint16_t get_AINOVALRTEN1();
        void set_AINOVALRTEN1(uint16_t);
    };

    class AlrtuvenRegister : public Register
    {
    public:
        AlrtuvenRegister(const uint16_t address) : Register(address) {}

        uint16_t get_UVALRTEN();
        void set_UVALRTEN(uint16_t);

        uint16_t get_AINUVALRTEN0();
        void set_AINUVALRTEN0(uint16_t);

        uint16_t get_AINUVALRTEN1();
        void set_AINUVALRTEN1(uint16_t);
    };

    class WatchdogRegister : public Register
    {
    public:
        WatchdogRegister(const uint16_t address) : Register(address) {}

        uint16_t get_CBTIMER();
        void set_CBTIMER(uint16_t);

        uint16_t get_CBPDIV();
        void set_CBPDIV(uint16_t);
    };

    class AcqcfgRegister : public Register
    {
    public:
        AcqcfgRegister(const uint16_t address) : Register(address) {}

        uint16_t get_AINTIME();
        void set_AINTIME(uint16_t);

        uint16_t get_THRMMODE();
        void set_THRMMODE(uint16_t);
    };

    class BalswenRegister : public Register
    {
    public:
        BalswenRegister(const uint16_t address) : Register(address) {}

        uint16_t get_BALSWEN();
        void set_BALSWEN(uint16_t);
    };

    class Devcfg2Register : public Register
    {
    public:
        Devcfg2Register(const uint16_t address) : Register(address) {}

        uint16_t get_TXUIDLEHIZ();
        void set_TXUIDLEHIZ(uint16_t);

        uint16_t get_TXLIDLEHIZ();
        void set_TXLIDLEHIZ(uint16_t);

        uint16_t get_TXADPEN();
        void set_TXADPEN(uint16_t);

        uint16_t get_LASTLOOP();
        void set_LASTLOOP(uint16_t);
    };

    class Baldiagcfg1Register : public Register
    {
    public:
        Baldiagcfg1Register(const uint16_t address) : Register(address) {}

        uint16_t get_CELLEN_M();
        void set_CELLEN_M(uint16_t);

        uint16_t get_POLARITY_M();
        void set_POLARITY_M(uint16_t);

        uint16_t get_ALTMUXSEL_M();
        void set_ALTMUXSEL_M(uint16_t);
    };

    class BalswdchgRegister : public Register
    {
    public:
        BalswdchgRegister(const uint16_t address) : Register(address) {}

        uint16_t get_DCHGTIME();
        void set_DCHGTIME(uint16_t);

        uint16_t get_DCHGCNTR();
        void set_DCHGCNTR(uint16_t);

        uint16_t get_DCHGWIN();
        void set_DCHGWIN(uint16_t);
    };

    class TopcellRegister : public Register
    {
    public:
        TopcellRegister(const uint16_t address) : Register(address) {}

        uint16_t get_TOPCELL();
        void set_TOPCELL(uint16_t);
    };

    class CellRegister : public Register
    {
    public:
        CellRegister(const uint16_t address) : Register(address) {}

        uint16_t get_CELLn();
        void set_CELLn(uint16_t);
    };

    class VblockRegister : public Register
    {
    public:
        VblockRegister(const uint16_t address) : Register(address) {}

        uint16_t get_VBLOCK();
        void set_VBLOCK(uint16_t);
    };

    class Ain1Register : public Register
    {
    public:
        Ain1Register(const uint16_t address) : Register(address) {}

        uint16_t get_AIN1();
        void set_AIN1(uint16_t);
    };

    class Ain2Register : public Register
    {
    public:
        Ain2Register(const uint16_t address) : Register(address) {}

        uint16_t get_AIN2();
        void set_AIN2(uint16_t);
    };

    class TotalRegister : public Register
    {
    public:
        TotalRegister(const uint16_t address) : Register(address) {}

        uint16_t get_SUM();
        void set_SUM(uint16_t);
    };

    class OvthclrRegister : public Register
    {
    public:
        OvthclrRegister(const uint16_t address) : Register(address) {}

        uint16_t get_OVTHCLR();
        void set_OVTHCLR(uint16_t);
    };

    class OvthsetRegister : public Register
    {
    public:
        OvthsetRegister(const uint16_t address) : Register(address) {}

        uint16_t get_OVTHSET();
        void set_OVTHSET(uint16_t);
    };

    class UvthclrRegister : public Register
    {
    public:
        UvthclrRegister(const uint16_t address) : Register(address) {}

        uint16_t get_UVTHCLR();
        void set_UVTHCLR(uint16_t);
    };

    class UvthsetRegister : public Register
    {
    public:
        UvthsetRegister(const uint16_t address) : Register(address) {}

        uint16_t get_UVTHSET();
        void set_UVTHSET(uint16_t);
    };

    class MsmtchRegister : public Register
    {
    public:
        MsmtchRegister(const uint16_t address) : Register(address) {}

        uint16_t get_MSMTCH();
        void set_MSMTCH(uint16_t);
    };

    class AinotRegister : public Register
    {
    public:
        AinotRegister(const uint16_t address) : Register(address) {}

        uint16_t get_AINOT();
        void set_AINOT(uint16_t);
    };

    class AinutRegister : public Register
    {
    public:
        AinutRegister(const uint16_t address) : Register(address) {}

        uint16_t get_AINUT();
        void set_AINUT(uint16_t);
    };

    class BalshrtthrRegister : public Register
    {
    public:
        BalshrtthrRegister(const uint16_t address) : Register(address) {}

        uint16_t get_BALSHRTTHR();
        void set_BALSHRTTHR(uint16_t);
    };

    class BallowthrRegister : public Register
    {
    public:
        BallowthrRegister(const uint16_t address) : Register(address) {}

        uint16_t get_BALLOWTHR();
        void set_BALLOWTHR(uint16_t);
    };

    class BalhighthrRegister : public Register
    {
    public:
        BalhighthrRegister(const uint16_t address) : Register(address) {}

        uint16_t get_BALHIGHTHR();
        void set_BALHIGHTHR(uint16_t);
    };

    class DiagRegister : public Register
    {
    public:
        DiagRegister(const uint16_t address) : Register(address) {}

        uint16_t get_DIAG();
        void set_DIAG(uint16_t);
    };

    class DiagcfgRegister : public Register
    {
    public:
        DiagcfgRegister(const uint16_t address) : Register(address) {}

        uint16_t get_DIAGSEL();
        void set_DIAGSEL(uint16_t);

        uint16_t get_ALTMUXSEL();
        void set_ALTMUXSEL(uint16_t);

        uint16_t get_MUXDIAGEN();
        void set_MUXDIAGEN(uint16_t);

        uint16_t get_MUXDIAGPAIR();
        void set_MUXDIAGPAIR(uint16_t);

        uint16_t get_MUXDIAGBUS();
        void set_MUXDIAGBUS(uint16_t);

        uint16_t get_AUXINTSTEN();
        void set_AUXINTSTEN(uint16_t);

        uint16_t get_CTSTSRC();
        void set_CTSTSRC(uint16_t);

        uint16_t get_CTSTDAC();
        void set_CTSTDAC(uint16_t);
    };

    class CtstenRegister : public Register
    {
    public:
        CtstenRegister(const uint16_t address) : Register(address) {}

        uint16_t get_CTSTEN();
        void set_CTSTEN(uint16_t);
    };

    class Adctest1aRegister : public Register
    {
    public:
        Adctest1aRegister(const uint16_t address) : Register(address) {}

        uint16_t get_ADCTEST1A();
        void set_ADCTEST1A(uint16_t);
    };

    class Adctest1bRegister : public Register
    {
    public:
        Adctest1bRegister(const uint16_t address) : Register(address) {}

        uint16_t get_ADCTEST1B();
        void set_ADCTEST1B(uint16_t);
    };

    class Adctest2aRegister : public Register
    {
    public:
        Adctest2aRegister(const uint16_t address) : Register(address) {}

        uint16_t get_ADCTEST2A();
        void set_ADCTEST2A(uint16_t);
    };

    class Adctest2bRegister : public Register
    {
    public:
        Adctest2bRegister(const uint16_t address) : Register(address) {}

        uint16_t get_ADCTEST2B();
        void set_ADCTEST2B(uint16_t);
    };

}