// 函数: sub_5172e0
// 地址: 0x5172e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *(arg1 + 0x44)
int32_t eax_3

if ((*(**(esi + (arg4 << 2) + 0x7c) + 0x20))() != 0)
    eax_3 = (*(**(esi + (arg4 << 2) + 0x7c) + 0x28))()
else
    eax_3 = 0

*arg2 = eax_3
int32_t* esi_1 = *(arg1 + 0x44)

if ((*(**(esi_1 + (arg4 << 2) + 0x7c) + 0x20))() == 0)
    *arg3 = 0
    return arg3

int32_t eax_10 = (*(**(esi_1 + (arg4 << 2) + 0x7c) + 0x2c))()
*arg3 = eax_10
return eax_10
