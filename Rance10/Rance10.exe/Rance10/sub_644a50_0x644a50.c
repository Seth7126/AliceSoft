// 函数: sub_644a50
// 地址: 0x644a50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x30)

if (ecx != 0)
    (*(*ecx + 4))()
    __builtin_memset(arg1 + 0x30, 0, 0x14)

int32_t* ecx_1 = *(arg1 + 0x18)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    __builtin_memset(arg1 + 0x18, 0, 0x14)

int32_t result
result.b = 1
return result
