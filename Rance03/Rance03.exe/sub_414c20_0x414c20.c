// 函数: sub_414c20
// 地址: 0x414c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpanalysis::CFuncStackWnd::`vftable'{for `dpanalysis::CTextChildWnd'}
void* ecx = arg1[0x19]

if (ecx != 0)
    struct dpanalysis::CTextChildWnd::dpanalysis::CFuncStackWnd::VTable** var_c_1 = arg1
    void* var_10_1 = ecx
    sub_415640(ecx, arg1[0x1a])
    j__free(arg1[0x19])
    arg1[0x19] = 0
    arg1[0x1a] = 0
    arg1[0x1b] = 0

return sub_41a7f0(arg1) __tailcall
