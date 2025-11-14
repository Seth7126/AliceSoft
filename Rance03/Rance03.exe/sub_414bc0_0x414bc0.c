// 函数: sub_414bc0
// 地址: 0x414bc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpanalysis::CFuncStackWnd::`vftable'{for `dpanalysis::CTextChildWnd'}
void* ecx = arg1[0x19]

if (ecx != 0)
    int32_t var_8_1 = arg2.d
    void* var_c_1 = ecx
    sub_415640(ecx, arg1[0x1a])
    j__free(arg1[0x19])
    arg1[0x19] = 0
    arg1[0x1a] = 0
    arg1[0x1b] = 0

sub_41a7f0(arg1)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
