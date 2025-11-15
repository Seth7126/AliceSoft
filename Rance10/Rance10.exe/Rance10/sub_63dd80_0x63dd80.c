// 函数: sub_63dd80
// 地址: 0x63dd80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0xd4) = *(arg1 + 0xd0)
*(arg1 + 0xdc) = 0
*(arg1 + 0xa8) = *(arg1 + 0xa4)
__builtin_memset(arg1 + 0xb0, 0, 0x1c)
*(arg1 + 0x8c) = *(arg1 + 0x88)
*(arg1 + 0x94) = 0
*(arg1 + 0x60) = *(arg1 + 0x5c)
__builtin_memset(arg1 + 0x68, 0, 0x1c)
int32_t result = (*(*(arg1 + 0xc) + 4))()
int32_t* ecx_1 = *(arg1 + 8)
*(arg1 + 0x40) = 0
*(arg1 + 0x44) = 0

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))()
    *(arg1 + 8) = 0

int32_t* ecx_2 = *(arg1 + 4)

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))()
    *(arg1 + 4) = 0

return result
