// 函数: sub_4570b0
// 地址: 0x4570b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

if (arg2 s< 0 || (*(arg1 + 0x18) - *(arg1 + 0x14)) s>> 2 s<= arg2)
    return 

void* ecx_1 = *(*(arg1 + 0x14) + (arg2 << 2))

if (ecx_1 == 0 || arg3 s< 0 || (*(ecx_1 + 8) - *(ecx_1 + 4)) s>> 2 s<= arg3)
    return 

int32_t eax = *(*(ecx_1 + 4) + (arg3 << 2))

if (eax != 0)
    sub_4591e0(*(eax + 0x10))
