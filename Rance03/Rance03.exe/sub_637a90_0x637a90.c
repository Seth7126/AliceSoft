// 函数: sub_637a90
// 地址: 0x637a90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx

if (arg3 == 0)
    ecx = arg1
    *(ecx + 0x30) = *(ecx + 0x38) + arg2
else if (arg3 == 1)
    ecx = arg1
    *(ecx + 0x30) += arg2
else
    if (arg3 != 2)
        return 0xffffffff
    
    ecx = arg1
    *(ecx + 0x30) = *(ecx + 0x38) + *(ecx + 0x34) + arg2

int32_t edx = *(ecx + 0x38)
int32_t eax_8 = *(ecx + 0x34) + edx

if (*(ecx + 0x30) u> eax_8)
    *(ecx + 0x30) = eax_8

if (*(ecx + 0x30) u< edx)
    *(ecx + 0x30) = edx

return 0
