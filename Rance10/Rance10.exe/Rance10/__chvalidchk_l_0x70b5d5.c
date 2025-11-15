// 函数: __chvalidchk_l
// 地址: 0x70b5d5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax_3
int32_t* ecx

if (arg3 == 0)
    eax_3 = zx.d(*(___pctype_func(ecx) + (arg1 << 1)))
else
    eax_3 = zx.d(*(**arg3 + (arg1 << 1)))
return eax_3 & arg2
