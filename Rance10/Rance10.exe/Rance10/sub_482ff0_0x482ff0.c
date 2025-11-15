// 函数: sub_482ff0
// 地址: 0x482ff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx

if (arg3 == 0)
    ecx = arg1
    *(ecx + 0x34) = *(ecx + 0x3c) + arg2
else if (arg3 == 1)
    ecx = arg1
    *(ecx + 0x34) += arg2
else
    if (arg3 != 2)
        return 0xffffffff
    
    ecx = arg1
    *(ecx + 0x34) = *(ecx + 0x3c) + *(ecx + 0x38) + arg2

int32_t edx = *(ecx + 0x3c)
int32_t eax_8 = *(ecx + 0x38) + edx

if (*(ecx + 0x34) u> eax_8)
    *(ecx + 0x34) = eax_8

if (*(ecx + 0x34) u< edx)
    *(ecx + 0x34) = edx

return 0
