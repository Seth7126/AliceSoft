// 函数: sub_4f6750
// 地址: 0x4f6750
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_edi = arg2
struct partsengine::CPartsList::VTable** eax = sub_4f14d0(arg1 + 0x128)

if (eax == 0)
    return eax

int32_t edi = eax[2]

if (arg2 s< edi || eax[1] + edi s<= arg2)
    return 0

int32_t vFunc_0 = eax[3][arg2 - edi].vFunc_0

if (vFunc_0 != 0)
    return vFunc_0

int32_t var_c = arg2
return sub_526580(eax)
