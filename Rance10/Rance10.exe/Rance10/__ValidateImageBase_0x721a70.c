// 函数: __ValidateImageBase
// 地址: 0x721a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*arg1 != 0x5a4d)
    return 0

void* ecx_1 = *(arg1 + 0x3c) + arg1
int32_t result = 0

if (*ecx_1 == 0x4550)
    result.b = *(ecx_1 + 0x18) == 0x10b

return result
