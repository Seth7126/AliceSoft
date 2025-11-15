// 函数: sub_652f80
// 地址: 0x652f80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1[0x60]

if (arg2 != 0)
    *(*arg1 + 0x14) = 3
    (**arg1)(arg1)

*(edi + 0x30) = arg1[8]
*(edi + 0x34) = 0
*(edi + 0x38) = 0
int32_t result = arg1[0x41] * 2
*(edi + 0x3c) = result
return result
