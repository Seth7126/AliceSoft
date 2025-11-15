// 函数: sub_6baee0
// 地址: 0x6baee0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return 

int32_t eax_1 = *(arg1 + 8)

if (eax_1 != 0)
    _free(eax_1)

int32_t eax = *(arg1 + 0xc)

if (eax != 0)
    _free(eax)

__builtin_memset(arg1, 0, 0x14)
