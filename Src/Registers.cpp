#include "../Inc/max17843.h"

namespace max17843
{
    uint16_t VersionRegister::get_VER()
    {
        return get(0, 4);
    }
    void VersionRegister::set_VER(uint16_t bitField)
    {
        set(0, 4, bitField);
    }

    uint16_t VersionRegister::get_MOD()
    {
        return get(4, 12);
    }
    void VersionRegister::set_MOD(uint16_t bitField)
    {
        set(4, 12, bitField);
    }
    uint16_t AddressRegister::get_AD()
    {
        return get(0, 5);
    }
    void AddressRegister::set_AD(uint16_t bitField)
    {
        set(0, 5, bitField);
    }

    uint16_t AddressRegister::get_FA()
    {
        return get(8, 5);
    }
    void AddressRegister::set_FA(uint16_t bitField)
    {
        set(8, 5, bitField);
    }
    uint16_t StatusRegister::get_ALRTFMEA1()
    {
        return get(0, 1);
    }
    void StatusRegister::set_ALRTFMEA1(uint16_t bitField)
    {
        set(0, 1, bitField);
    }

    uint16_t StatusRegister::get_ALRTFMEA2()
    {
        return get(1, 1);
    }
    void StatusRegister::set_ALRTFMEA2(uint16_t bitField)
    {
        set(1, 1, bitField);
    }

    uint16_t StatusRegister::get_ALRTPAR()
    {
        return get(2, 1);
    }
    void StatusRegister::set_ALRTPAR(uint16_t bitField)
    {
        set(2, 1, bitField);
    }

    uint16_t StatusRegister::get_ALRTMAN()
    {
        return get(4, 1);
    }
    void StatusRegister::set_ALRTMAN(uint16_t bitField)
    {
        set(4, 1, bitField);
    }

    uint16_t StatusRegister::get_ALRTPEC()
    {
        return get(7, 1);
    }
    void StatusRegister::set_ALRTPEC(uint16_t bitField)
    {
        set(7, 1, bitField);
    }

    uint16_t StatusRegister::get_ALRTTHOT()
    {
        return get(8, 1);
    }
    void StatusRegister::set_ALRTTHOT(uint16_t bitField)
    {
        set(8, 1, bitField);
    }

    uint16_t StatusRegister::get_ALRTTCOLD()
    {
        return get(9, 1);
    }
    void StatusRegister::set_ALRTTCOLD(uint16_t bitField)
    {
        set(9, 1, bitField);
    }

    uint16_t StatusRegister::get_ALRTMSMTCH()
    {
        return get(10, 1);
    }
    void StatusRegister::set_ALRTMSMTCH(uint16_t bitField)
    {
        set(10, 1, bitField);
    }

    uint16_t StatusRegister::get_ALRTSHDNLRT()
    {
        return get(11, 1);
    }
    void StatusRegister::set_ALRTSHDNLRT(uint16_t bitField)
    {
        set(11, 1, bitField);
    }

    uint16_t StatusRegister::get_ALRTSHDNL()
    {
        return get(12, 1);
    }
    void StatusRegister::set_ALRTSHDNL(uint16_t bitField)
    {
        set(12, 1, bitField);
    }

    uint16_t StatusRegister::get_ALRTUV()
    {
        return get(13, 1);
    }
    void StatusRegister::set_ALRTUV(uint16_t bitField)
    {
        set(13, 1, bitField);
    }

    uint16_t StatusRegister::get_ALRTOV()
    {
        return get(14, 1);
    }
    void StatusRegister::set_ALRTOV(uint16_t bitField)
    {
        set(14, 1, bitField);
    }

    uint16_t StatusRegister::get_ALRTRST()
    {
        return get(15, 1);
    }
    void StatusRegister::set_ALRTRST(uint16_t bitField)
    {
        set(15, 1, bitField);
    }
    uint16_t Fmea1Register::get_ALRTGNDL1()
    {
        return get(0, 1);
    }
    void Fmea1Register::set_ALRTGNDL1(uint16_t bitField)
    {
        set(0, 1, bitField);
    }

    uint16_t Fmea1Register::get_ALRTVDDL1()
    {
        return get(1, 1);
    }
    void Fmea1Register::set_ALRTVDDL1(uint16_t bitField)
    {
        set(1, 1, bitField);
    }

    uint16_t Fmea1Register::get_ALRTGNDL3()
    {
        return get(2, 1);
    }
    void Fmea1Register::set_ALRTGNDL3(uint16_t bitField)
    {
        set(2, 1, bitField);
    }

    uint16_t Fmea1Register::get_ALRTHVUV()
    {
        return get(3, 1);
    }
    void Fmea1Register::set_ALRTHVUV(uint16_t bitField)
    {
        set(3, 1, bitField);
    }

    uint16_t Fmea1Register::get_ALRTTEMP()
    {
        return get(4, 1);
    }
    void Fmea1Register::set_ALRTTEMP(uint16_t bitField)
    {
        set(4, 1, bitField);
    }

    uint16_t Fmea1Register::get_ALRTBALSW()
    {
        return get(5, 1);
    }
    void Fmea1Register::set_ALRTBALSW(uint16_t bitField)
    {
        set(5, 1, bitField);
    }

    uint16_t Fmea1Register::get_ALRTGNDL2()
    {
        return get(6, 1);
    }
    void Fmea1Register::set_ALRTGNDL2(uint16_t bitField)
    {
        set(6, 1, bitField);
    }

    uint16_t Fmea1Register::get_ALRTVDDL2()
    {
        return get(7, 1);
    }
    void Fmea1Register::set_ALRTVDDL2(uint16_t bitField)
    {
        set(7, 1, bitField);
    }

    uint16_t Fmea1Register::get_ALRTVDDL3()
    {
        return get(8, 1);
    }
    void Fmea1Register::set_ALRTVDDL3(uint16_t bitField)
    {
        set(8, 1, bitField);
    }

    uint16_t Fmea1Register::get_ALRTCOMMSEL2()
    {
        return get(9, 1);
    }
    void Fmea1Register::set_ALRTCOMMSEL2(uint16_t bitField)
    {
        set(9, 1, bitField);
    }

    uint16_t Fmea1Register::get_ALRTCOMMSEU2()
    {
        return get(10, 1);
    }
    void Fmea1Register::set_ALRTCOMMSEU2(uint16_t bitField)
    {
        set(10, 1, bitField);
    }

    uint16_t Fmea1Register::get_ALRTCOMMSEL1()
    {
        return get(11, 1);
    }
    void Fmea1Register::set_ALRTCOMMSEL1(uint16_t bitField)
    {
        set(11, 1, bitField);
    }

    uint16_t Fmea1Register::get_ALRTCOMMSEU1()
    {
        return get(12, 1);
    }
    void Fmea1Register::set_ALRTCOMMSEU1(uint16_t bitField)
    {
        set(12, 1, bitField);
    }

    uint16_t Fmea1Register::get_ALRTOSC2()
    {
        return get(14, 1);
    }
    void Fmea1Register::set_ALRTOSC2(uint16_t bitField)
    {
        set(14, 1, bitField);
    }

    uint16_t Fmea1Register::get_ALRTOSC1()
    {
        return get(15, 1);
    }
    void Fmea1Register::set_ALRTOSC1(uint16_t bitField)
    {
        set(15, 1, bitField);
    }
    uint16_t AlrtcellRegister::get_ALRTCELL()
    {
        return get(0, 12);
    }
    void AlrtcellRegister::set_ALRTCELL(uint16_t bitField)
    {
        set(0, 12, bitField);
    }

    uint16_t AlrtcellRegister::get_ALRTAIN0()
    {
        return get(12, 1);
    }
    void AlrtcellRegister::set_ALRTAIN0(uint16_t bitField)
    {
        set(12, 1, bitField);
    }

    uint16_t AlrtcellRegister::get_ALRTAIN1()
    {
        return get(13, 1);
    }
    void AlrtcellRegister::set_ALRTAIN1(uint16_t bitField)
    {
        set(13, 1, bitField);
    }
    uint16_t AlrtovcellRegister::get_ALRTOV()
    {
        return get(0, 12);
    }
    void AlrtovcellRegister::set_ALRTOV(uint16_t bitField)
    {
        set(0, 12, bitField);
    }

    uint16_t AlrtovcellRegister::get_ALRTOVAIN0()
    {
        return get(12, 1);
    }
    void AlrtovcellRegister::set_ALRTOVAIN0(uint16_t bitField)
    {
        set(12, 1, bitField);
    }

    uint16_t AlrtovcellRegister::get_ALRTOVAIN1()
    {
        return get(13, 1);
    }
    void AlrtovcellRegister::set_ALRTOVAIN1(uint16_t bitField)
    {
        set(13, 1, bitField);
    }
    uint16_t AlrtuvcellRegister::get_ALRTUV()
    {
        return get(0, 12);
    }
    void AlrtuvcellRegister::set_ALRTUV(uint16_t bitField)
    {
        set(0, 12, bitField);
    }

    uint16_t AlrtuvcellRegister::get_ALRTUVAIN0()
    {
        return get(12, 1);
    }
    void AlrtuvcellRegister::set_ALRTUVAIN0(uint16_t bitField)
    {
        set(12, 1, bitField);
    }

    uint16_t AlrtuvcellRegister::get_ALRTUVAIN1()
    {
        return get(13, 1);
    }
    void AlrtuvcellRegister::set_ALRTUVAIN1(uint16_t bitField)
    {
        set(13, 1, bitField);
    }
    uint16_t AlrtbalswRegister::get_ALRTBALSW()
    {
        return get(0, 12);
    }
    void AlrtbalswRegister::set_ALRTBALSW(uint16_t bitField)
    {
        set(0, 12, bitField);
    }
    uint16_t MinmaxcellRegister::get_MINCELL()
    {
        return get(0, 4);
    }
    void MinmaxcellRegister::set_MINCELL(uint16_t bitField)
    {
        set(0, 4, bitField);
    }

    uint16_t MinmaxcellRegister::get_MAXCELL()
    {
        return get(8, 4);
    }
    void MinmaxcellRegister::set_MAXCELL(uint16_t bitField)
    {
        set(8, 4, bitField);
    }
    uint16_t Fmea2Register::get_ALRTHVOV()
    {
        return get(0, 1);
    }
    void Fmea2Register::set_ALRTHVOV(uint16_t bitField)
    {
        set(0, 1, bitField);
    }

    uint16_t Fmea2Register::get_ALRTHVHDRM()
    {
        return get(2, 1);
    }
    void Fmea2Register::set_ALRTHVHDRM(uint16_t bitField)
    {
        set(2, 1, bitField);
    }
    uint16_t AutobalswdisRegister::get_CellRecoveryTime()
    {
        return get(0, 8);
    }
    void AutobalswdisRegister::set_CellRecoveryTime(uint16_t bitField)
    {
        set(0, 8, bitField);
    }

    uint16_t AutobalswdisRegister::get_DiagnosticRecorveryTime()
    {
        return get(8, 8);
    }
    void AutobalswdisRegister::set_DiagnosticRecorveryTime(uint16_t bitField)
    {
        set(8, 8, bitField);
    }
    uint16_t Id1Register::get_DEVID()
    {
        return get(0, 15);
    }
    void Id1Register::set_DEVID(uint16_t bitField)
    {
        set(0, 15, bitField);
    }
    uint16_t Id2Register::get_DEVID()
    {
        return get(0, 8);
    }
    void Id2Register::set_DEVID(uint16_t bitField)
    {
        set(0, 8, bitField);
    }

    uint16_t Id2Register::get_ROMCRC()
    {
        return get(8, 8);
    }
    void Id2Register::set_ROMCRC(uint16_t bitField)
    {
        set(8, 8, bitField);
    }
    uint16_t Devcfg1Register::get_SPOR()
    {
        return get(0, 1);
    }
    void Devcfg1Register::set_SPOR(uint16_t bitField)
    {
        set(0, 1, bitField);
    }

    uint16_t Devcfg1Register::get_ADDRUNLOCK()
    {
        return get(1, 1);
    }
    void Devcfg1Register::set_ADDRUNLOCK(uint16_t bitField)
    {
        set(1, 1, bitField);
    }

    uint16_t Devcfg1Register::get_NOPEC()
    {
        return get(2, 1);
    }
    void Devcfg1Register::set_NOPEC(uint16_t bitField)
    {
        set(2, 1, bitField);
    }

    uint16_t Devcfg1Register::get_BALSWDISABLE()
    {
        return get(3, 1);
    }
    void Devcfg1Register::set_BALSWDISABLE(uint16_t bitField)
    {
        set(3, 1, bitField);
    }

    uint16_t Devcfg1Register::get_SCANTODIS()
    {
        return get(4, 1);
    }
    void Devcfg1Register::set_SCANTODIS(uint16_t bitField)
    {
        set(4, 1, bitField);
    }

    uint16_t Devcfg1Register::get_ADCTSTEN()
    {
        return get(5, 1);
    }
    void Devcfg1Register::set_ADCTSTEN(uint16_t bitField)
    {
        set(5, 1, bitField);
    }

    uint16_t Devcfg1Register::get_ALIVECNTEN()
    {
        return get(6, 1);
    }
    void Devcfg1Register::set_ALIVECNTEN(uint16_t bitField)
    {
        set(6, 1, bitField);
    }

    uint16_t Devcfg1Register::get_FORCEPOR()
    {
        return get(7, 1);
    }
    void Devcfg1Register::set_FORCEPOR(uint16_t bitField)
    {
        set(7, 1, bitField);
    }

    uint16_t Devcfg1Register::get_HVCPDIS()
    {
        return get(9, 1);
    }
    void Devcfg1Register::set_HVCPDIS(uint16_t bitField)
    {
        set(9, 1, bitField);
    }

    uint16_t Devcfg1Register::get_EMGCYDCHG()
    {
        return get(10, 1);
    }
    void Devcfg1Register::set_EMGCYDCHG(uint16_t bitField)
    {
        set(10, 1, bitField);
    }

    uint16_t Devcfg1Register::get_FC()
    {
        return get(11, 3);
    }
    void Devcfg1Register::set_FC(uint16_t bitField)
    {
        set(11, 3, bitField);
    }

    uint16_t Devcfg1Register::get_ADCSELECT()
    {
        return get(14, 1);
    }
    void Devcfg1Register::set_ADCSELECT(uint16_t bitField)
    {
        set(14, 1, bitField);
    }

    uint16_t Devcfg1Register::get_POLARITY()
    {
        return get(15, 1);
    }
    void Devcfg1Register::set_POLARITY(uint16_t bitField)
    {
        set(15, 1, bitField);
    }
    uint16_t GpioRegister::get_DRV()
    {
        return get(0, 3);
    }
    void GpioRegister::set_DRV(uint16_t bitField)
    {
        set(0, 3, bitField);
    }

    uint16_t GpioRegister::get_GPIO3TMR()
    {
        return get(7, 1);
    }
    void GpioRegister::set_GPIO3TMR(uint16_t bitField)
    {
        set(7, 1, bitField);
    }

    uint16_t GpioRegister::get_RD()
    {
        return get(8, 4);
    }
    void GpioRegister::set_RD(uint16_t bitField)
    {
        set(8, 4, bitField);
    }

    uint16_t GpioRegister::get_DIR()
    {
        return get(12, 4);
    }
    void GpioRegister::set_DIR(uint16_t bitField)
    {
        set(12, 4, bitField);
    }
    uint16_t MeasureenRegister::get_CELLEN()
    {
        return get(0, 12);
    }
    void MeasureenRegister::set_CELLEN(uint16_t bitField)
    {
        set(0, 12, bitField);
    }

    uint16_t MeasureenRegister::get_AIN1EN()
    {
        return get(12, 1);
    }
    void MeasureenRegister::set_AIN1EN(uint16_t bitField)
    {
        set(12, 1, bitField);
    }

    uint16_t MeasureenRegister::get_AIN2EN()
    {
        return get(13, 1);
    }
    void MeasureenRegister::set_AIN2EN(uint16_t bitField)
    {
        set(13, 1, bitField);
    }

    uint16_t MeasureenRegister::get_BLOCKEN()
    {
        return get(14, 1);
    }
    void MeasureenRegister::set_BLOCKEN(uint16_t bitField)
    {
        set(14, 1, bitField);
    }

    uint16_t MeasureenRegister::get_BLKCONNECT()
    {
        return get(15, 1);
    }
    void MeasureenRegister::set_BLKCONNECT(uint16_t bitField)
    {
        set(15, 1, bitField);
    }
    uint16_t ScanctrlRegister::get_SCAN()
    {
        return get(0, 1);
    }
    void ScanctrlRegister::set_SCAN(uint16_t bitField)
    {
        set(0, 1, bitField);
    }

    uint16_t ScanctrlRegister::get_FILTDONE()
    {
        return get(1, 1);
    }
    void ScanctrlRegister::set_FILTDONE(uint16_t bitField)
    {
        set(1, 1, bitField);
    }

    uint16_t ScanctrlRegister::get_SCANMODE()
    {
        return get(2, 1);
    }
    void ScanctrlRegister::set_SCANMODE(uint16_t bitField)
    {
        set(2, 1, bitField);
    }

    uint16_t ScanctrlRegister::get_AMENDFILT()
    {
        return get(3, 1);
    }
    void ScanctrlRegister::set_AMENDFILT(uint16_t bitField)
    {
        set(3, 1, bitField);
    }

    uint16_t ScanctrlRegister::get_OVSAMPL()
    {
        return get(4, 3);
    }
    void ScanctrlRegister::set_OVSAMPL(uint16_t bitField)
    {
        set(4, 3, bitField);
    }

    uint16_t ScanctrlRegister::get_RDFILT()
    {
        return get(7, 1);
    }
    void ScanctrlRegister::set_RDFILT(uint16_t bitField)
    {
        set(7, 1, bitField);
    }

    uint16_t ScanctrlRegister::get_BALSWDIAG()
    {
        return get(8, 3);
    }
    void ScanctrlRegister::set_BALSWDIAG(uint16_t bitField)
    {
        set(8, 3, bitField);
    }

    uint16_t ScanctrlRegister::get_AUTOBALSWDIS()
    {
        return get(11, 1);
    }
    void ScanctrlRegister::set_AUTOBALSWDIS(uint16_t bitField)
    {
        set(11, 1, bitField);
    }

    uint16_t ScanctrlRegister::get_DELAYSEL()
    {
        return get(12, 1);
    }
    void ScanctrlRegister::set_DELAYSEL(uint16_t bitField)
    {
        set(12, 1, bitField);
    }

    uint16_t ScanctrlRegister::get_DATARDY()
    {
        return get(13, 1);
    }
    void ScanctrlRegister::set_DATARDY(uint16_t bitField)
    {
        set(13, 1, bitField);
    }

    uint16_t ScanctrlRegister::get_SCANTIMEOUT()
    {
        return get(14, 1);
    }
    void ScanctrlRegister::set_SCANTIMEOUT(uint16_t bitField)
    {
        set(14, 1, bitField);
    }

    uint16_t ScanctrlRegister::get_SCANDONE()
    {
        return get(14, 1);
    }
    void ScanctrlRegister::set_SCANDONE(uint16_t bitField)
    {
        set(14, 1, bitField);
    }
    uint16_t AlrtovenRegister::get_OVALRTEN()
    {
        return get(0, 12);
    }
    void AlrtovenRegister::set_OVALRTEN(uint16_t bitField)
    {
        set(0, 12, bitField);
    }

    uint16_t AlrtovenRegister::get_AINOVALRTEN0()
    {
        return get(12, 1);
    }
    void AlrtovenRegister::set_AINOVALRTEN0(uint16_t bitField)
    {
        set(12, 1, bitField);
    }

    uint16_t AlrtovenRegister::get_AINOVALRTEN1()
    {
        return get(13, 1);
    }
    void AlrtovenRegister::set_AINOVALRTEN1(uint16_t bitField)
    {
        set(13, 1, bitField);
    }
    uint16_t AlrtuvenRegister::get_UVALRTEN()
    {
        return get(0, 12);
    }
    void AlrtuvenRegister::set_UVALRTEN(uint16_t bitField)
    {
        set(0, 12, bitField);
    }

    uint16_t AlrtuvenRegister::get_AINUVALRTEN0()
    {
        return get(12, 1);
    }
    void AlrtuvenRegister::set_AINUVALRTEN0(uint16_t bitField)
    {
        set(12, 1, bitField);
    }

    uint16_t AlrtuvenRegister::get_AINUVALRTEN1()
    {
        return get(13, 1);
    }
    void AlrtuvenRegister::set_AINUVALRTEN1(uint16_t bitField)
    {
        set(13, 1, bitField);
    }
    uint16_t WatchdogRegister::get_CBTIMER()
    {
        return get(8, 4);
    }
    void WatchdogRegister::set_CBTIMER(uint16_t bitField)
    {
        set(8, 4, bitField);
    }

    uint16_t WatchdogRegister::get_CBPDIV()
    {
        return get(12, 4);
    }
    void WatchdogRegister::set_CBPDIV(uint16_t bitField)
    {
        set(12, 4, bitField);
    }
    uint16_t AcqcfgRegister::get_AINTIME()
    {
        return get(0, 5);
    }
    void AcqcfgRegister::set_AINTIME(uint16_t bitField)
    {
        set(0, 5, bitField);
    }

    uint16_t AcqcfgRegister::get_THRMMODE()
    {
        return get(8, 2);
    }
    void AcqcfgRegister::set_THRMMODE(uint16_t bitField)
    {
        set(8, 2, bitField);
    }
    uint16_t BalswenRegister::get_BALSWEN()
    {
        return get(0, 12);
    }
    void BalswenRegister::set_BALSWEN(uint16_t bitField)
    {
        set(0, 12, bitField);
    }
    uint16_t Devcfg2Register::get_TXUIDLEHIZ()
    {
        return get(10, 1);
    }
    void Devcfg2Register::set_TXUIDLEHIZ(uint16_t bitField)
    {
        set(10, 1, bitField);
    }

    uint16_t Devcfg2Register::get_TXLIDLEHIZ()
    {
        return get(11, 1);
    }
    void Devcfg2Register::set_TXLIDLEHIZ(uint16_t bitField)
    {
        set(11, 1, bitField);
    }

    uint16_t Devcfg2Register::get_TXADPEN()
    {
        return get(14, 1);
    }
    void Devcfg2Register::set_TXADPEN(uint16_t bitField)
    {
        set(14, 1, bitField);
    }

    uint16_t Devcfg2Register::get_LASTLOOP()
    {
        return get(15, 1);
    }
    void Devcfg2Register::set_LASTLOOP(uint16_t bitField)
    {
        set(15, 1, bitField);
    }
    uint16_t Baldiagcfg1Register::get_CELLEN_M()
    {
        return get(0, 12);
    }
    void Baldiagcfg1Register::set_CELLEN_M(uint16_t bitField)
    {
        set(0, 12, bitField);
    }

    uint16_t Baldiagcfg1Register::get_POLARITY_M()
    {
        return get(12, 1);
    }
    void Baldiagcfg1Register::set_POLARITY_M(uint16_t bitField)
    {
        set(12, 1, bitField);
    }

    uint16_t Baldiagcfg1Register::get_ALTMUXSEL_M()
    {
        return get(13, 1);
    }
    void Baldiagcfg1Register::set_ALTMUXSEL_M(uint16_t bitField)
    {
        set(13, 1, bitField);
    }
    uint16_t BalswdchgRegister::get_DCHGTIME()
    {
        return get(0, 8);
    }
    void BalswdchgRegister::set_DCHGTIME(uint16_t bitField)
    {
        set(0, 8, bitField);
    }

    uint16_t BalswdchgRegister::get_DCHGCNTR()
    {
        return get(8, 4);
    }
    void BalswdchgRegister::set_DCHGCNTR(uint16_t bitField)
    {
        set(8, 4, bitField);
    }

    uint16_t BalswdchgRegister::get_DCHGWIN()
    {
        return get(13, 3);
    }
    void BalswdchgRegister::set_DCHGWIN(uint16_t bitField)
    {
        set(13, 3, bitField);
    }

    uint16_t TopcellRegister::get_TOPCELL()
    {
        return get(0, 4);
    }
    void TopcellRegister::set_TOPCELL(uint16_t bitField)
    {
        set(0, 4, bitField);
    }
    uint16_t CellRegister::get_CELLn()
    {
        return get(0, 16);
    }
    void CellRegister::set_CELLn(uint16_t bitField)
    {
        set(0, 16, bitField);
    }
    uint16_t VblockRegister::get_VBLOCK()
    {
        return get(0, 16);
    }
    void VblockRegister::set_VBLOCK(uint16_t bitField)
    {
        set(0, 16, bitField);
    }
    uint16_t Ain1Register::get_AIN1()
    {
        return get(0, 16);
    }
    void Ain1Register::set_AIN1(uint16_t bitField)
    {
        set(0, 16, bitField);
    }
    uint16_t Ain2Register::get_AIN2()
    {
        return get(0, 16);
    }
    void Ain2Register::set_AIN2(uint16_t bitField)
    {
        set(0, 16, bitField);
    }
    uint16_t TotalRegister::get_SUM()
    {
        return get(0, 16);
    }
    void TotalRegister::set_SUM(uint16_t bitField)
    {
        set(0, 16, bitField);
    }
    uint16_t OvthclrRegister::get_OVTHCLR()
    {
        return get(0, 16);
    }
    void OvthclrRegister::set_OVTHCLR(uint16_t bitField)
    {
        set(0, 16, bitField);
    }
    uint16_t OvthsetRegister::get_OVTHSET()
    {
        return get(0, 16);
    }
    void OvthsetRegister::set_OVTHSET(uint16_t bitField)
    {
        set(0, 16, bitField);
    }
    uint16_t UvthclrRegister::get_UVTHCLR()
    {
        return get(0, 16);
    }
    void UvthclrRegister::set_UVTHCLR(uint16_t bitField)
    {
        set(0, 16, bitField);
    }
    uint16_t UvthsetRegister::get_UVTHSET()
    {
        return get(0, 16);
    }
    void UvthsetRegister::set_UVTHSET(uint16_t bitField)
    {
        set(0, 16, bitField);
    }
    uint16_t MsmtchRegister::get_MSMTCH()
    {
        return get(0, 16);
    }
    void MsmtchRegister::set_MSMTCH(uint16_t bitField)
    {
        set(0, 16, bitField);
    }
    uint16_t AinotRegister::get_AINOT()
    {
        return get(0, 16);
    }
    void AinotRegister::set_AINOT(uint16_t bitField)
    {
        set(0, 16, bitField);
    }
    uint16_t AinutRegister::get_AINUT()
    {
        return get(0, 16);
    }
    void AinutRegister::set_AINUT(uint16_t bitField)
    {
        set(0, 16, bitField);
    }
    uint16_t BalshrtthrRegister::get_BALSHRTTHR()
    {
        return get(0, 16);
    }
    void BalshrtthrRegister::set_BALSHRTTHR(uint16_t bitField)
    {
        set(0, 16, bitField);
    }
    uint16_t BallowthrRegister::get_BALLOWTHR()
    {
        return get(0, 16);
    }
    void BallowthrRegister::set_BALLOWTHR(uint16_t bitField)
    {
        set(0, 16, bitField);
    }
    uint16_t BalhighthrRegister::get_BALHIGHTHR()
    {
        return get(0, 16);
    }
    void BalhighthrRegister::set_BALHIGHTHR(uint16_t bitField)
    {
        set(0, 16, bitField);
    }
    uint16_t DiagRegister::get_DIAG()
    {
        return get(0, 16);
    }
    void DiagRegister::set_DIAG(uint16_t bitField)
    {
        set(0, 16, bitField);
    }
    uint16_t DiagcfgRegister::get_DIAGSEL()
    {
        return get(0, 3);
    }
    void DiagcfgRegister::set_DIAGSEL(uint16_t bitField)
    {
        set(0, 3, bitField);
    }

    uint16_t DiagcfgRegister::get_ALTMUXSEL()
    {
        return get(3, 1);
    }
    void DiagcfgRegister::set_ALTMUXSEL(uint16_t bitField)
    {
        set(3, 1, bitField);
    }

    uint16_t DiagcfgRegister::get_MUXDIAGEN()
    {
        return get(4, 1);
    }
    void DiagcfgRegister::set_MUXDIAGEN(uint16_t bitField)
    {
        set(4, 1, bitField);
    }

    uint16_t DiagcfgRegister::get_MUXDIAGPAIR()
    {
        return get(6, 1);
    }
    void DiagcfgRegister::set_MUXDIAGPAIR(uint16_t bitField)
    {
        set(6, 1, bitField);
    }

    uint16_t DiagcfgRegister::get_MUXDIAGBUS()
    {
        return get(7, 1);
    }
    void DiagcfgRegister::set_MUXDIAGBUS(uint16_t bitField)
    {
        set(7, 1, bitField);
    }

    uint16_t DiagcfgRegister::get_AUXINTSTEN()
    {
        return get(8, 2);
    }
    void DiagcfgRegister::set_AUXINTSTEN(uint16_t bitField)
    {
        set(8, 2, bitField);
    }

    uint16_t DiagcfgRegister::get_CTSTSRC()
    {
        return get(11, 1);
    }
    void DiagcfgRegister::set_CTSTSRC(uint16_t bitField)
    {
        set(11, 1, bitField);
    }

    uint16_t DiagcfgRegister::get_CTSTDAC()
    {
        return get(12, 4);
    }
    void DiagcfgRegister::set_CTSTDAC(uint16_t bitField)
    {
        set(12, 4, bitField);
    }
    uint16_t CtstenRegister::get_CTSTEN()
    {
        return get(0, 13);
    }
    void CtstenRegister::set_CTSTEN(uint16_t bitField)
    {
        set(0, 13, bitField);
    }
    uint16_t Adctest1aRegister::get_ADCTEST1A()
    {
        return get(0, 12);
    }
    void Adctest1aRegister::set_ADCTEST1A(uint16_t bitField)
    {
        set(0, 12, bitField);
    }
    uint16_t Adctest1bRegister::get_ADCTEST1B()
    {
        return get(0, 12);
    }
    void Adctest1bRegister::set_ADCTEST1B(uint16_t bitField)
    {
        set(0, 12, bitField);
    }
    uint16_t Adctest2aRegister::get_ADCTEST2A()
    {
        return get(0, 12);
    }
    void Adctest2aRegister::set_ADCTEST2A(uint16_t bitField)
    {
        set(0, 12, bitField);
    }
    uint16_t Adctest2bRegister::get_ADCTEST2B()
    {
        return get(0, 12);
    }
    void Adctest2bRegister::set_ADCTEST2B(uint16_t bitField)
    {
        set(0, 12, bitField);
    }

}