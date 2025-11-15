// 函数: sub_48c600
// 地址: 0x48c600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x5c)

if (eax != 0)
    _free(eax)

int32_t eax_1 = *(arg1 + 0x48)

if (eax_1 != 0)
    _free(eax_1)

int32_t eax_2 = *(arg1 + 0x34)

if (eax_2 != 0)
    _free(eax_2)

int32_t eax_3 = *(arg1 + 0x20)

if (eax_3 != 0)
    _free(eax_3)

if ((arg2 & 1) != 0)
    int32_t var_8_5 = 0x60
    operator new(arg1)

return arg1
