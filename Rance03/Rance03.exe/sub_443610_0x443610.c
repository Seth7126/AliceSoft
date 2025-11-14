// 函数: sub_443610
// 地址: 0x443610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg5

if (ebx s> 0x7ff)
    ebx = 0x7ff
else if (ebx s< 0xfffff800)
    ebx = 0xfffff800
else if ((ebx.b & 1) == 0)
    int32_t eax_1
    eax_1.b = ebx s> 0
    ebx -= (eax_1 << 1) + 0xffffffff

int32_t ecx_1 = arg3 + (arg4 << 3)
*arg2 = ecx_1
*((ecx_1 << 2) + arg1) = (*U" ,*& ")[ecx_1] * ebx
return arg1
