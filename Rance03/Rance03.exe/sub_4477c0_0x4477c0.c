// 函数: sub_4477c0
// 地址: 0x4477c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t var_8 = 0
uint32_t eax = sub_443580(arg2)
int32_t eax_1
uint32_t esi

if (eax s>= 0)
    esi = 0
    eax_1 = 1
else if ((eax & 0x40000000) == 0)
    esi = 1
    eax_1 = 2
else if ((eax & 0x20000000) == 0)
    esi = 2
    eax_1 = 3
else if ((eax & 0x10000000) == 0)
    esi = 3
    eax_1 = 4
else
    eax_1 = sub_447ce0(&var_8, eax)
    esi = var_8

*(arg2 + 8) += eax_1
int32_t ebx = *(arg2 + 8)

if (esi != 0)
    int32_t eax_2 = sub_443540(arg2, 1)
    var_8 = ebx + 1
    *(arg2 + 8) = ebx + 1
    int32_t ecx_4
    ecx_4.b = eax_2 == 0
    int32_t eax_3 = 0
    
    if (arg4 != 0)
        eax_3 = sub_443540(arg2, arg4)
        *(arg2 + 8) = var_8 + arg4
    
    char ecx_9 = arg4.b
    *arg3 += (eax_3 + ((esi - 1) << ecx_9) + 1) * ((ecx_4 << 1) + 0xffffffff)
    int32_t edx_4 = *arg3
    
    if (edx_4 s< 0xfffffff0 << ecx_9)
        *arg3 = (0x20 << ecx_9) + edx_4
        int32_t eax_8
        eax_8.b = 1
        return eax_8
    
    if (edx_4 s> (0x10 << ecx_9) - 1)
        *arg3 = edx_4 - (0x20 << ecx_9)

eax_1.b = 1
return eax_1
