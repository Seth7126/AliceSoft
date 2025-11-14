// 函数: sub_416c70
// 地址: 0x416c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct dpanalysis::CTextChildWnd::dpanalysis::CSourceWnd::VTable** var_4 = arg1
*arg1 = &dpanalysis::CSourceWnd::`vftable'{for `dpanalysis::CTextChildWnd'}
int32_t** eax = arg1[0x2c]
sub_417e10(&arg1[0x2c], &var_4, *eax, eax)
j__free(arg1[0x2c])
int32_t eax_1 = arg1[0x29]

if (eax_1 != 0)
    j__free(eax_1)
    arg1[0x29] = 0
    arg1[0x2a] = 0
    arg1[0x2b] = 0

void* esi = arg1[0x1d]
arg1[0x1c] = &dpanalysis::CBalloonHelp::`vftable'

if (esi != 0)
    sub_412e40(esi)
    j__free(esi)

return sub_41a7f0(arg1) __tailcall
