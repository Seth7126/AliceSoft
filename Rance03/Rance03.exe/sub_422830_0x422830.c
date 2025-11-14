// 函数: sub_422830
// 地址: 0x422830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpvariable::CFreeVarWnd::`vftable'{for `dpvariable::CVarWnd'}
void* ecx = arg1[0x45]

if (ecx != 0)
    struct dpvariable::CVarWnd::dpvariable::CFreeVarWnd::VTable** var_c_1 = arg1
    void* var_10_1 = ecx
    sub_424560(ecx, arg1[0x46])
    j__free(arg1[0x45])
    arg1[0x45] = 0
    arg1[0x46] = 0
    arg1[0x47] = 0

*arg1 = &dpvariable::CVarWnd::`vftable'{for `dpvariable::CTextChildWnd'}
return sub_42b6e0(arg1) __tailcall
